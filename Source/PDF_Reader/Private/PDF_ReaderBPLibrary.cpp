// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_ReaderBPLibrary.h"
#include "PDF_Reader.h"

// UE Includes.
#include "Misc/FileHelper.h"
#include "Kismet/GameplayStatics.h"
#include "RHICommandList.h"					
#include "RenderingThread.h"
#include "Misc/Base64.h"

THIRD_PARTY_INCLUDES_START
// C++ Includes.
#include <string>
#include <fstream>

// PDFium Includes.
#include "fpdf_formfill.h"
#include "fpdf_text.h"
#include "fpdf_edit.h"
#include "fpdf_save.h"
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

bool UPDF_ReaderBPLibrary::PDF_Read_Bytes(UArrayObject*& Out_Byte_Object, TArray<uint8> In_Bytes)
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

bool UPDF_ReaderBPLibrary::PDF_File_Open(UPDFiumDoc*& Out_PDF, UPARAM(ref)UArrayObject*& In_Byte_Object, FString In_PDF_Password)
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

bool UPDF_ReaderBPLibrary::PDF_File_Close(UPARAM(ref)UPDFiumDoc*& In_PDF)
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

bool UPDF_ReaderBPLibrary::PDF_Get_Pages(TMap<UTexture2D*, FVector2D>& Out_Pages, TArray<FPdfBytes>& Out_Pages_Bytes, UPARAM(ref)UPDFiumDoc*& In_PDF, double In_Sampling, bool bUseMatrix, bool sRgb, bool bUseBase64Url)
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

	double Sampling = 1;
	if (In_Sampling < 1)
	{
		Sampling = 1;
	}

	else
	{
		Sampling = In_Sampling;
	}

	for (int32 PageIndex = 0; PageIndex < FPDF_GetPageCount(In_PDF->Document); PageIndex++)
	{		
		FPDF_PAGE PDF_Page = FPDF_LoadPage(In_PDF->Document, PageIndex);
		double_t PDF_Page_Width = FPDF_GetPageWidth(PDF_Page);
		double_t PDF_Page_Height = FPDF_GetPageHeight(PDF_Page);

		FVector2D EachResolution = FVector2D(PDF_Page_Width, PDF_Page_Height);
		
		void* FirstScan = malloc(static_cast<SIZE_T>(PDF_Page_Width * PDF_Page_Height * Sampling * Sampling * 4));
		FPDF_BITMAP PDF_Bitmap = FPDFBitmap_CreateEx((int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), FPDFBitmap_BGRA, FirstScan, (int)(PDF_Page_Width * Sampling * 4));
		FPDFBitmap_FillRect(PDF_Bitmap, 0, 0, (PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), 0xffffffff);
		
		FPDF_FORMHANDLE Form_Handle;
		FMemory::Memset(&Form_Handle, 0, sizeof(Form_Handle));
		FPDF_FFLDraw(Form_Handle, PDF_Bitmap, PDF_Page, 0, 0, (int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), 0, 0);

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
					FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), 0, FPDF_ANNOT);
				}
			);

			FlushRenderingCommands();
		}
#else
		ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([&PDF_Bitmap, PDF_Page, PDF_Page_Width, PDF_Page_Height, Sampling](FRHICommandListImmediate& CommandList)
			{
				FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (int)(PDF_Page_Width * Sampling), (int)(PDF_Page_Height * Sampling), 0, FPDF_ANNOT);
			}
		);

		FlushRenderingCommands();
#endif
		UTexture2D* PDF_Texture = UTexture2D::CreateTransient((int32)(PDF_Page_Width * Sampling), (int32)(PDF_Page_Height * Sampling), PF_B8G8R8A8);
		
		if (sRgb)
		{
			PDF_Texture->SRGB = 1;
		}

		else
		{
			PDF_Texture->SRGB = 0;
		}
		
		FTexture2DMipMap& PDF_Texture_Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* PDF_Texture_Data = PDF_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

		void* Buffer = FPDFBitmap_GetBuffer(PDF_Bitmap);
		SIZE_T Size = static_cast<SIZE_T>(FPDFBitmap_GetStride(PDF_Bitmap)) * PDF_Page_Height * Sampling;
		FMemory::Memcpy(PDF_Texture_Data, Buffer, Size);

		// Bytes Export Start
		FString Base64 = FBase64::Encode((uint8*)Buffer, Size);
		if (bUseBase64Url)
		{
			Base64.ReplaceInline(TEXT("+"), TEXT("-"));
			Base64.ReplaceInline(TEXT("/"), TEXT("_"));
			Base64.ReplaceInline(TEXT("="), TEXT(""));
		}

		FPdfBytes PdfBytes;
		PdfBytes.Bytes_String = Base64;
		PdfBytes.Original_Resolution = EachResolution;
		PdfBytes.Sampling = Sampling;
		PdfBytes.bUseBase64Url = bUseBase64Url;
		// Bytes Export End

		PDF_Texture_Mip.BulkData.Unlock();
		PDF_Texture->UpdateResource();
		
		Out_Pages.Add(PDF_Texture, EachResolution);

		FPDFBitmap_Destroy(PDF_Bitmap);
		FPDF_ClosePage(PDF_Page);

		Out_Pages_Bytes.Add(PdfBytes);
	}

	if (Out_Pages.Num() > 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool UPDF_ReaderBPLibrary::PDF_Bytes_To_T2D(TMap<UTexture2D*, FVector2D>& Out_Pages, TArray<FPdfBytes> In_Pages_Bytes, bool sRgb)
{
	if (In_Pages_Bytes.Num() == 0)
	{
		return false;
	}

	for (int32 Index_Image = 0; Index_Image < In_Pages_Bytes.Num(); Index_Image++)
	{
		FString BytesString = In_Pages_Bytes[Index_Image].Bytes_String;
		if (In_Pages_Bytes[Index_Image].bUseBase64Url)
		{
			BytesString.ReplaceInline(TEXT("-"), TEXT("+"));
			BytesString.ReplaceInline(TEXT("_"), TEXT("/"));
		}

		TArray<uint8> Bytes;
		FBase64::Decode(BytesString, Bytes);

		UTexture2D* PDF_Texture = UTexture2D::CreateTransient(In_Pages_Bytes[Index_Image].Original_Resolution.X * In_Pages_Bytes[Index_Image].Sampling, In_Pages_Bytes[Index_Image].Original_Resolution.Y * In_Pages_Bytes[Index_Image].Sampling, PF_B8G8R8A8);

		if (sRgb)
		{
			PDF_Texture->SRGB = 1;
		}

		else
		{
			PDF_Texture->SRGB = 0;
		}

		FTexture2DMipMap& PDF_Texture_Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* PDF_Texture_Data = PDF_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

		FMemory::Memcpy(PDF_Texture_Data, Bytes.GetData(), Bytes.Num());
		PDF_Texture_Mip.BulkData.Unlock();
		PDF_Texture->UpdateResource();

		FVector2D EachResolution;
		EachResolution.X = In_Pages_Bytes[Index_Image].Original_Resolution.X;
		EachResolution.Y = In_Pages_Bytes[Index_Image].Original_Resolution.Y;

		Out_Pages.Add(PDF_Texture, EachResolution);
	}

	return true;
}

bool UPDF_ReaderBPLibrary::PDF_Get_Texts(TArray<FString>& Out_Texts, UPARAM(ref)UPDFiumDoc*& In_PDF)
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

bool UPDF_ReaderBPLibrary::PDF_Get_Links(TArray<FString>& Out_Links, UPARAM(ref)UPDFiumDoc*& In_PDF, int32 PageIndex)
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

bool UPDF_ReaderBPLibrary::PDF_Select_Text(FString& Out_Text, UPARAM(ref)UPDFiumDoc*& In_PDF, FVector2D Start, FVector2D End, int32 PageIndex)
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