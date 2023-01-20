// Copyright Epic Games, Inc. All Rights Reserved.

#include "PDF_ReaderBPLibrary.h"
#include "PDF_Reader.h"

// UE Includes.
#include "Kismet/GameplayStatics.h"

THIRD_PARTY_INCLUDES_START
// PDFium Includes.
#include "fpdfview.h"
THIRD_PARTY_INCLUDES_END

UPDF_ReaderBPLibrary::UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool UPDF_ReaderBPLibrary::Read_PDF(TMap<UTexture2D*, FVector2D>& OutPages, FString InPath, TArray<uint8> InBytes, FString InPDF_Pass, double Sampling)
{
	FString Path = InPath;
	
	if (UGameplayStatics::GetPlatformName() == "Windows")
	{
		FPaths::MakePlatformFilename(Path);
	}

	if (UGameplayStatics::GetPlatformName() == "Android" || UGameplayStatics::GetPlatformName() == "iOS")
	{
		Path = FPlatformFileManager::Get().GetPlatformFile().ConvertToAbsolutePathForExternalAppForRead(*InPath);
	}
	
	FPDF_InitLibrary();

	FPDF_DOCUMENT Document = NULL;
	if (InBytes.Num() > 0)
	{
		Document = FPDF_LoadMemDocument(InBytes.GetData(), InBytes.Num(), TCHAR_TO_UTF8(*InPDF_Pass));
		
	}

	else
	{
		Document = FPDF_LoadDocument(TCHAR_TO_UTF8(*Path), TCHAR_TO_UTF8(*InPDF_Pass));
	}

	if (!Document)
	{
		return false;
	}
	
	int32 PDF_Page_Count = FPDF_GetPageCount(Document);

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
		PDF_Texture->SRGB = 0;;
		FTexture2DMipMap& Mip = PDF_Texture->GetPlatformData()->Mips[0];
		void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

		FPDF_BITMAP PDF_Bitmap = FPDFBitmap_Create((PDF_Page_Width * Sampling), (PDF_Page_Height * Sampling), 0);
		if (PDF_Bitmap != NULL)
		{
			void* buf = FPDFBitmap_GetBuffer(PDF_Bitmap);
			int32 stride = FPDFBitmap_GetStride(PDF_Bitmap);
			int32 Height = FPDFBitmap_GetHeight(PDF_Bitmap);

			FPDFBitmap_FillRect(PDF_Bitmap, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0xffffffff);
			FPDF_RenderPageBitmap(PDF_Bitmap, PDF_Page, 0, 0, (PDF_Page_Width * Sampling) - 1, (PDF_Page_Height * Sampling) - 1, 0, 0);
			FPDF_ClosePage(PDF_Page);

			FMemory::Memcpy(Data, buf, stride * Height);

			FPDFBitmap_Destroy(PDF_Bitmap);
		}

		Mip.BulkData.Unlock();

#define UpdateResource UpdateResource
		PDF_Texture->UpdateResource();
#undef UpdateResource	// specific case for #include "fpdfview.h"

		OutPages.Add(PDF_Texture, EachResolution);
	}

	FPDF_CloseDocument(Document);
	return true;
}

