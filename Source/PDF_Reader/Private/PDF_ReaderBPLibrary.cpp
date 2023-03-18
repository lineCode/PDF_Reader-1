// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_ReaderBPLibrary.h"
#include "PDF_Reader.h"

// UE Includes.
#include "Misc/FileHelper.h"
#include "Kismet/GameplayStatics.h"
#include "RHICommandList.h"					
#include "RenderingThread.h"				

THIRD_PARTY_INCLUDES_START
// C++ Includes.
#include <string>
#include <fstream>

// PDFium Includes.
#include "fpdf_formfill.h"
#include "fpdf_text.h"
#include "fpdf_edit.h"
THIRD_PARTY_INCLUDES_END

static inline bool Global_bIsLibInitialized = false;
static inline TSet<FPDF_DOCUMENT> Global_Docs_Pool;

UPDF_ReaderBPLibrary::UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject) == false)
	{
		AddToRoot();
	}
}

FString UPDF_ReaderBPLibrary::PDF_Android_Path_Helper(FString InFileName)
{
	if (UGameplayStatics::GetPlatformName() == "Android" || UGameplayStatics::GetPlatformName() == "IOS")
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

void UPDF_ReaderBPLibrary::PDF_LibInit()
{
	FPDF_LIBRARY_CONFIG config;
	FMemory::Memset(&config, 0, sizeof(config));
	config.version = 2;
	config.m_pUserFontPaths = NULL;
	config.m_pIsolate = NULL;
	config.m_v8EmbedderSlot = 0;
	FPDF_InitLibraryWithConfig(&config);

	Global_bIsLibInitialized = true;
}

void UPDF_ReaderBPLibrary::PDF_LibClose()
{
	TArray<FPDF_DOCUMENT> Array_Docs = Global_Docs_Pool.Array();
	
	for (int32 Index_Docs = 0; Index_Docs < Array_Docs.Num(); Index_Docs++)
	{
		if (Array_Docs[Index_Docs])
		{
			FPDF_CloseDocument(Array_Docs[Index_Docs]);
		}
	}
	
	Array_Docs.Empty();
	Global_Docs_Pool.Empty();

	Global_bIsLibInitialized = false;
	FPDF_DestroyLibrary();
}

bool UPDF_ReaderBPLibrary::PDF_LibState()
{
	return Global_bIsLibInitialized;
}

bool UPDF_ReaderBPLibrary::PDF_Read_Path(UArrayObject*& Out_Byte_Object, FString In_Path)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (In_Path.IsEmpty() == true)
	{
		return false;
	}

	FString Path = In_Path;

	if (UGameplayStatics::GetPlatformName() == "Windows")
	{
		FPaths::MakePlatformFilename(Path);
	}

	if (FPaths::FileExists(Path) == false)
	{
		return false;
	}

	TArray64<uint8> ByteArray;
	FFileHelper::LoadFileToArray(ByteArray, *In_Path);

	UArrayObject* ByteObject = NewObject<UArrayObject>();
	ByteObject->Array_Bytes_64 = ByteArray;
	
	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Read_HTTP(UArrayObject*& Out_Byte_Object, TArray<uint8> In_Bytes)
{
	if (In_Bytes.Num() == 0)
	{
		return false;
	}

	UArrayObject* Byte_Object = NewObject<UArrayObject>();
	Byte_Object->Array_Bytes_32 = In_Bytes;

	Out_Byte_Object = Byte_Object;

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Read_File_Open(UPDFiumDoc*& Out_PDF, UPARAM(ref)UArrayObject*& In_Byte_Object, FString In_PDF_Password)
{
	if (IsValid(In_Byte_Object) == false)
	{
		GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Red, "Byte object is not valid.");
		return false;
	}

	if (In_Byte_Object->Array_Bytes_32.Num() == 0 && In_Byte_Object->Array_Bytes_64.Num() == 0)
	{
		return false;
	}

	void* PDF_Data;
	size_t PDF_Data_Size;

	if (In_Byte_Object->Array_Bytes_64.Num() > 0)
	{
		PDF_Data = In_Byte_Object->Array_Bytes_64.GetData();
		PDF_Data_Size = In_Byte_Object->Array_Bytes_64.Num();
	}

	else
	{
		PDF_Data = In_Byte_Object->Array_Bytes_32.GetData();
		PDF_Data_Size = In_Byte_Object->Array_Bytes_32.Num();
	}

	UPDFiumDoc* PDF_Object = NewObject<UPDFiumDoc>();

#ifdef _WIN64
	PDF_Object->Document = FPDF_LoadMemDocument64(PDF_Data, PDF_Data_Size, TCHAR_TO_UTF8(*In_PDF_Password));
#else
	PDF_Object->Document = FPDF_LoadMemDocument(PDF_Data, PDF_Data_Size, TCHAR_TO_UTF8(*In_PDF_Password));
#endif

	if (!PDF_Object->Document)
	{
		GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Red, "Unable to load PDF file.");
		return false;
	}

	Global_Docs_Pool.Add(PDF_Object->Document);
	
	Out_PDF = PDF_Object;

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Read_File_Close(UPARAM(ref)UPDFiumDoc*& In_PDF)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	Global_Docs_Pool.Remove(In_PDF->Document);
	FPDF_CloseDocument(In_PDF->Document);
	In_PDF = nullptr;
	
	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Generate_Bitmap(TMap<UTexture2D*, FVector2D>& Out_Pages, UPARAM(ref)UPDFiumDoc*& In_PDF, double Sampling, bool bUseMatrix)
{	
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	TMap<UTexture2D*, FVector2D> Pages;
	for (int32 PageIndex = 0; PageIndex < FPDF_GetPageCount(In_PDF->Document); PageIndex++)
	{		
		FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
		double PDF_Page_Width = FPDF_GetPageWidth(PDF_Page);
		double PDF_Page_Height = FPDF_GetPageHeight(PDF_Page);
		FVector2D EachResolution = FVector2D(PDF_Page_Width, PDF_Page_Height);
		
		FPDF_BITMAP PDF_Bitmap = FPDFBitmap_CreateEx((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), FPDFBitmap_BGRA, NULL, 0);
		FPDFBitmap_FillRect(PDF_Bitmap, 0, 0, (PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), 0xffffffff);
		
		FPDF_FORMHANDLE Form_Handle;
		FMemory::Memset(&Form_Handle, 0, sizeof(Form_Handle));
		FPDF_FFLDraw(Form_Handle, PDF_Bitmap, PDF_Page, 0, 0, (int)((PDF_Page_Width * Sampling) - 1), (int)((PDF_Page_Height * Sampling) - 1), 0, 0);
	
#ifdef _WIN64
		if (bUseMatrix == true)
		{
			FS_RECTF rc;
			FMemory::Memset(&rc, 0, sizeof(rc));
			rc.left = 0;
			rc.right = (PDF_Page_Width * Sampling) - 1;

			rc.top = 0;
			rc.bottom = (PDF_Page_Height * Sampling) - 1;
			
			FS_MATRIX transform;
			FMemory::Memset(&transform, 0, sizeof(transform));

			transform.a = 1 * Sampling;
			transform.b = 0;
			transform.c = 0;
			transform.d = 1 * Sampling;
			transform.e = 0;
			transform.f = 0;

			ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, &transform, &rc](FRHICommandListImmediate& CommandList)
				{
					FPDF_RenderPageBitmapWithMatrix(PDF_Bitmap, PDF_Page, &transform, &rc, FPDF_ANNOT);
				}
			);

			FlushRenderingCommands();
		}

		else
		{
			ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, PDF_Page_Width, PDF_Page_Height, Sampling](FRHICommandListImmediate& CommandList)
				{
					FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (int)((PDF_Page_Width * Sampling) - 1), (int)((PDF_Page_Height * Sampling) - 1), 0, FPDF_ANNOT);
				}
			);

			FlushRenderingCommands();
		}
#else
		ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, PDF_Page_Width, PDF_Page_Height, Sampling](FRHICommandListImmediate& CommandList)
			{
				FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (int)((PDF_Page_Width * Sampling) - 1), (int)((PDF_Page_Height * Sampling) - 1), 0, FPDF_ANNOT);
			}
		);

		FlushRenderingCommands();
#endif

		UTexture2D* PDF_Texture = UTexture2D::CreateTransient((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), PF_B8G8R8A8);
		PDF_Texture->SRGB = 0;
		FTexture2DMipMap& PDF_Texture_Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* PDF_Texture_Data = PDF_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

		FMemory::Memcpy(PDF_Texture_Data, FPDFBitmap_GetBuffer(PDF_Bitmap), (static_cast<SIZE_T>(FPDFBitmap_GetStride(PDF_Bitmap)) * PDF_Page_Height));
		PDF_Texture_Mip.BulkData.Unlock();
		PDF_Texture->UpdateResource();
		
		Pages.Add(PDF_Texture, EachResolution);
		
		FPDFBitmap_Destroy(PDF_Bitmap);
		FPDF_ClosePage(PDF_Page);
	}

	Out_Pages = Pages;

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Generate_Texts(TArray<FString>& Out_Texts, UPARAM(ref)UPDFiumDoc*& In_PDF)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	unsigned short* CharBuffer = (unsigned short*)malloc(0x2000 * sizeof(unsigned short));
	for (int32 PageIndex = 0; PageIndex < FPDF_GetPageCount(In_PDF->Document); PageIndex++)
	{
		FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
		FPDF_TEXTPAGE PDF_TextPage = FPDFText_LoadPage(PDF_Page);
		FPDF_ClosePage(PDF_Page);

		FString PageText;
		int CharCount = FPDFText_CountChars(PDF_TextPage);
		for (int32 CharIndex = 0; CharIndex < CharCount; CharIndex++)
		{
			FPDFText_GetText(PDF_TextPage, CharIndex, CharCount, CharBuffer);
			PageText = PageText + (char*)CharBuffer;
		}
		
		Out_Texts.Add(PageText);
		FPDFText_ClosePage(PDF_TextPage);
	}

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Generate_Links(TArray<FString>& Out_Links, UPARAM(ref)UPDFiumDoc*& In_PDF, int32 PageIndex)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}
	
	FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
	FPDF_TEXTPAGE PDF_TextPage = FPDFText_LoadPage(PDF_Page);
	FPDF_ClosePage(PDF_Page);

	FPDF_PAGELINK PDF_Links = FPDFLink_LoadWebLinks(PDF_TextPage);
	int32 Links_Count = FPDFLink_CountWebLinks(PDF_Links);

	if (Links_Count == 0)
	{
		FPDFLink_CloseWebLinks(PDF_Links);
		FPDFText_ClosePage(PDF_TextPage);
		
		return false;
	}

	for (int32 Index_Link = 0; Index_Link < Links_Count; Index_Link++)
	{
		unsigned short* CharBuffer = (unsigned short*)malloc(0x2000 * sizeof(unsigned short));
		FPDFLink_GetURL(PDF_Links, Index_Link, CharBuffer, INT_MAX);
		
		FString LinkText;
		for (int32 CharIndex = 0; CharIndex < INT_MAX; CharIndex++)
		{
			if (CharBuffer[CharIndex] == false)
			{
				break;
			}

			LinkText += (char)CharBuffer[CharIndex];
		}

		Out_Links.Add(LinkText);
	}

	FPDFLink_CloseWebLinks(PDF_Links);
	FPDFText_ClosePage(PDF_TextPage);

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Generate_Text_At_Area(FString& Out_Text, UPARAM(ref)UPDFiumDoc*& In_PDF, FVector2D Start, FVector2D End, int32 PageIndex)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
	FPDF_TEXTPAGE PDF_TextPage = FPDFText_LoadPage(PDF_Page);
	FPDF_ClosePage(PDF_Page);

	unsigned short* CharBuffer = (unsigned short*)malloc(0x2000 * sizeof(unsigned short));
	int32 CharCount = FPDFText_CountChars(PDF_TextPage);
	FPDFText_GetBoundedText(PDF_TextPage, Start.X, Start.Y, End.X, End.Y, CharBuffer, CharCount);
	
	FString PageText;
	for (int32 CharIndex = 0; CharIndex < CharCount; CharIndex++)
	{
		if (CharBuffer[CharIndex] == false)
		{
			break;
		}

		PageText += (char)CharBuffer[CharIndex];
	}

	Out_Text = PageText;

	FPDFText_ClosePage(PDF_TextPage);

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Get_Pages_Count(int32& PagesCount, UPARAM(ref)UPDFiumDoc*& In_PDF)
{
	if (Global_bIsLibInitialized == false)
	{
		return false;
	}

	if (IsValid(In_PDF) == false)
	{
		return false;
	}

	if (!In_PDF->Document)
	{
		return false;
	}

	PagesCount = FPDF_GetPageCount(In_PDF->Document);

	return true;
}