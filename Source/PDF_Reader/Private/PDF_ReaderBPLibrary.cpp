// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_ReaderBPLibrary.h"
#include "PDF_Reader.h"

// UE Includes.
#include "Kismet/GameplayStatics.h"

THIRD_PARTY_INCLUDES_START
// PDFium Includes.
#include "fpdf_formfill.h"
#include "fpdfview.h"
#include "fpdf_text.h"

#include <string>
THIRD_PARTY_INCLUDES_END

UPDF_ReaderBPLibrary::UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject) == false)
	{
		AddToRoot();
	}
}

FString UPDF_ReaderBPLibrary::AndroidFolderHelper(FString InFileName)
{
	if (UGameplayStatics::GetPlatformName() == "Android")
	{
		if (InFileName.IsEmpty() == true)
		{
			return "";
		}

		FString Path_Referance = FPlatformFileManager::Get().GetPlatformFile().ConvertToAbsolutePathForExternalAppForRead(*(FPaths::ProjectSavedDir()));

		TArray<FString> Path_Sections;
		Path_Referance.ParseIntoArray(Path_Sections, TEXT("/"), true);
		FString Path_Absolute = "/" + Path_Sections[0] + "/" + Path_Sections[1] + "/" + Path_Sections[2] + "/" + InFileName;

		return Path_Absolute;
	}

	else
	{
		return "";
	}
}

void UPDF_ReaderBPLibrary::PDF_LibInit(UPDFiumLib*& OutPDFium)
{
	UPDFiumLib* PDFiumLib = NewObject<UPDFiumLib>();
	
	FPDF_LIBRARY_CONFIG config;
	FMemory::Memset(&config, 0, sizeof(config));
	config.version = 2;
	config.m_pUserFontPaths = NULL;
	config.m_pIsolate = NULL;
	config.m_v8EmbedderSlot = 0;
	FPDF_InitLibraryWithConfig(&config);

	PDFiumLib->bIsLibraryInitialized = true;
	
	OutPDFium = PDFiumLib;
}

void UPDF_ReaderBPLibrary::PDF_LibClose(UPARAM(ref)UPDFiumLib*& InPDFium)
{
	InPDFium->bIsLibraryInitialized = false;
	FPDF_DestroyLibrary();
}

bool UPDF_ReaderBPLibrary::PDF_Read(UPARAM(ref)UPDFiumLib*& InPDFium, TMap<UTexture2D*, FVector2D>& OutPages, FString InPath, TArray<uint8> InBytes, FString InPDF_Pass, double Sampling)
{	
	if (InPDFium->bIsLibraryInitialized == false)
	{
		return false;
	}

	FPDF_DOCUMENT Document = NULL;

	if (InBytes.Num() > 0)
	{
#ifdef _WIN64
		Document = FPDF_LoadMemDocument64(InBytes.GetData(), InBytes.Num(), TCHAR_TO_UTF8(*InPDF_Pass));
#endif

#ifdef __ANDROID__
		Document = FPDF_LoadMemDocument(InBytes.GetData(), InBytes.Num(), TCHAR_TO_UTF8(*InPDF_Pass));
#endif
	}

	else
	{
		if (InPath.IsEmpty() == true)
		{
			return false;
		}

		FString Path = InPath;

		if (UGameplayStatics::GetPlatformName() == "Windows")
		{
			FPaths::MakePlatformFilename(Path);
		}

		if (UGameplayStatics::GetPlatformName() == "Android" || UGameplayStatics::GetPlatformName() == "iOS")
		{
			Path = FPlatformFileManager::Get().GetPlatformFile().ConvertToAbsolutePathForExternalAppForRead(*InPath);
		}

		if (FPaths::FileExists(Path) == false)
		{
			return false;
		}

		Document = FPDF_LoadDocument(TCHAR_TO_UTF8(*Path), TCHAR_TO_UTF8(*InPDF_Pass));
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, "Document loaded from path.");
	}

	if (!Document)
	{
		return false;
	}

	int32 PDF_Page_Count = FPDF_GetPageCount(Document);

	TMap<UTexture2D*, FVector2D> Pages;

	for (int32 PageIndex = 0; PageIndex < PDF_Page_Count; PageIndex++)
	{
		FPDF_PAGE PDF_Page = FPDF_LoadPage(Document, PageIndex);

		double PDF_Page_Width = FPDF_GetPageWidth(PDF_Page);
		double PDF_Page_Height = FPDF_GetPageHeight(PDF_Page);
		FVector2D EachResolution = FVector2D(PDF_Page_Width, PDF_Page_Height);

		UTexture2D* PDF_Texture = UTexture2D::CreateTransient((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), PF_B8G8R8A8);

#if WITH_EDITORONLY_DATA
		PDF_Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
#endif

		PDF_Texture->SRGB = 0;
		FTexture2DMipMap& Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

		FPDF_BITMAP PDF_Bitmap = FPDFBitmap_CreateEx((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), FPDFBitmap_BGRA, NULL, 0);

		if (PDF_Bitmap != NULL)
		{
			FPDF_FORMHANDLE Form_Handle;
			FMemory::Memset(&Form_Handle, 0, sizeof(Form_Handle));

			void* Buffer = FPDFBitmap_GetBuffer(PDF_Bitmap);
			int32 Stride = FPDFBitmap_GetStride(PDF_Bitmap);
			int32 Height = FPDFBitmap_GetHeight(PDF_Bitmap);
			size_t Count = static_cast<size_t>(Stride) * Height;

			FPDFBitmap_FillRect(PDF_Bitmap, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0xffffffff);
			FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0, FPDF_ANNOT);
			FPDF_FFLDraw(Form_Handle, PDF_Bitmap, PDF_Page, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0, 0);
			FPDF_ClosePage(PDF_Page);

			FMemory::Memcpy(Data, Buffer, Count);

			FPDFBitmap_Destroy(PDF_Bitmap);
		}

		Mip.BulkData.Unlock();
		
#ifdef _WIN64
#define UpdateResource UpdateResource
		PDF_Texture->UpdateResource();
#undef UpdateResource	// specific case for #include "fpdfview.h"
#endif

#ifdef __ANDROID__
		PDF_Texture->UpdateResource(); 
#endif

		Pages.Add(PDF_Texture, EachResolution);
	}

	OutPages = Pages;

	FPDF_CloseDocument(Document);
	
	return true;
}