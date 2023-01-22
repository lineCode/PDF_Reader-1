// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_ReaderBPLibrary.h"
#include "PDF_Reader.h"

// UE Includes.
#include "Kismet/GameplayStatics.h"

THIRD_PARTY_INCLUDES_START
// PDFium Includes.
#include "fpdf_formfill.h"
#include "fpdfview.h"
THIRD_PARTY_INCLUDES_END

UPDF_ReaderBPLibrary::UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UPDF_ReaderBPLibrary::Read_PDF(TMap<UTexture2D*, FVector2D>& OutPages, bool bUseDebug, FString InPath, TArray<uint8> InBytes, FString InPDF_Pass, double Sampling)
{	
	FPDF_LIBRARY_CONFIG config;
	FMemory::Memset(&config, 0, sizeof(config));
	config.version = 2;
	config.m_pUserFontPaths = NULL;
	config.m_pIsolate = NULL;
	config.m_v8EmbedderSlot = 0;
	FPDF_InitLibraryWithConfig(&config);

	if (bUseDebug)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, "PDF library initialized.");
	}

	FPDF_DOCUMENT Document = NULL;

	if (InBytes.Num() > 0)
	{
		Document = FPDF_LoadMemDocument64(InBytes.GetData(), InBytes.Num(), TCHAR_TO_UTF8(*InPDF_Pass));

		if (bUseDebug)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, "Document loaded from memory.");
		}
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

	if (bUseDebug)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, ("Function got PDF page count = " + FString::FromInt(PDF_Page_Count)));
	}

	for (int32 PageIndex = 0; PageIndex < PDF_Page_Count; PageIndex++)
	{
		FPDF_PAGE PDF_Page = FPDF_LoadPage(Document, PageIndex);

		double PDF_Page_Width = FPDF_GetPageWidth(PDF_Page);
		double PDF_Page_Height = FPDF_GetPageHeight(PDF_Page);
		FVector2D EachResolution = FVector2D(PDF_Page_Width, PDF_Page_Height);

		UTexture2D* PDF_Texture = UTexture2D::CreateTransient((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), PF_B8G8R8A8);

		if (bUseDebug)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, ("Texture created " + FString::FromInt(PageIndex)));
		}

#if WITH_EDITORONLY_DATA
		PDF_Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
#endif

		PDF_Texture->SRGB = 0;;
		FTexture2DMipMap& Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

		FPDF_BITMAP PDF_Bitmap = FPDFBitmap_CreateEx((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), FPDFBitmap_BGRA, NULL, 0);

		if (bUseDebug)
		{
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, ("Bitmap created " + FString::FromInt(PageIndex)));
		}

		if (PDF_Bitmap != NULL)
		{
			FPDF_FORMHANDLE Form_Handle;
			FMemory::Memset(&Form_Handle, 0, sizeof(Form_Handle));

			void* Buffer = FPDFBitmap_GetBuffer(PDF_Bitmap);
			int32 Stride = FPDFBitmap_GetStride(PDF_Bitmap);
			int32 Height = FPDFBitmap_GetHeight(PDF_Bitmap);
			size_t Count = static_cast<size_t>(Stride) * Height;

			FPDFBitmap_FillRect(PDF_Bitmap, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0xffffffff);
			FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0, 0);
			FPDF_FFLDraw(Form_Handle, PDF_Bitmap, PDF_Page, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0, 0);

			FPDF_ClosePage(PDF_Page);

			FMemory::Memcpy(Data, Buffer, Count);
			
			if (bUseDebug)
			{
				GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, ("Bitmap has been copied to texture " + FString::FromInt(PageIndex)));
			}

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

		OutPages.Add(PDF_Texture, EachResolution);
	}

	FPDF_CloseDocument(Document);

	return true;
}