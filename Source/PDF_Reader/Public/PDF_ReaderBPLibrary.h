// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START
#ifdef _WIN64
#include <Windows/AllowWindowsPlatformTypes.h>
#include "fpdfview.h"
#include <Windows/HideWindowsPlatformTypes.h>
#endif

#ifdef __ANDROID__
#include "fpdfview.h"
#endif
THIRD_PARTY_INCLUDES_END

#include "PDF_ReaderBPLibrary.generated.h"

/* 
*	PDFium Binaries
*	https://github.com/bblanchon/pdfium-binaries/releases
*	https://github.com/barteksc/PdfiumAndroid
*/

USTRUCT(BlueprintType)
struct FPdfBytes
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	FString Bytes_String;

	UPROPERTY(BlueprintReadOnly)
	FVector2D Original_Resolution;

	UPROPERTY(BlueprintReadOnly)
	float Sampling;

	UPROPERTY(BlueprintReadOnly)
	bool bUseBase64Url;

};

UCLASS(BlueprintType)
class PDF_READER_API UArrayObject : public UObject
{
	GENERATED_BODY()

public:

	TArray64<uint8> Array_Bytes_64;
	TArray<uint8> Array_Bytes_32;
};

UCLASS(BlueprintType)
class PDF_READER_API UPDFiumDoc : public UObject
{
	GENERATED_BODY()

public:
	
	FPDF_DOCUMENT Document;
};

UCLASS()
class UPDF_ReaderBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Library Init", Keywords = "pdf, pdfium, library, lib, open"), Category = "PDF_Reader|System")
	static void PDF_LibInit();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Library Close", Keywords = "pdf, pdfium, library, lib, close"), Category = "PDF_Reader|System")
	static void PDF_LibClose();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "PDF Reader - Library State", ToolTip = "", Keywords = "pdf, pdfium, library, state, get, is, initialized"), Category = "PDF_Reader|System")
	static bool PDF_LibState();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "PDF Reader - Mobile Path Helper", ToolTip = "This node automatically gives Internal Storage absolute path. So, you just need to define sub-folder and pdf file. Example: Download/sample.pdf", Keywords = "pdf, pdfium, android, ios, mobile, folder, file, path, helper"), Category = "PDF_Reader|Read|Helpers")
	static FString PDF_Android_Path_Helper(FString InFileName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Read from Path", ToolTip = "You need to use absolute platform path. You can use \"PDF Reader - Mobile Path Helper\" to generate it for mobile.", Keywords = "pdf, pdfium, read, load, path"), Category = "PDF_Reader|Read")
	static bool PDF_Read_Path(UArrayObject*& Out_Byte_Object, FString In_Path);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Read from Bytes", ToolTip = "", Keywords = "pdf, pdfium, read, load, path"), Category = "PDF_Reader|Read")
	static bool PDF_Read_Bytes(UArrayObject*& Out_Byte_Object, TArray<uint8> In_Bytes);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Open File", ToolTip = "", Keywords = "pdf, pdfium, read, open"), Category = "PDF_Reader|Read")
	static bool PDF_File_Open(UPDFiumDoc*& Out_PDF, UPARAM(ref)UArrayObject*& In_Byte_Object, FString In_PDF_Password);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Close File", ToolTip = "", Keywords = "pdf, pdfium, read, close"), Category = "PDF_Reader|Read")
	static bool PDF_File_Close(UPARAM(ref)UPDFiumDoc*& In_PDF);

	/**
	* @param In_Sampling Default (also minimum) value is "1" but "2" gives best result for A4 sized PDF on 17 inch notebook screen. Bigger values is good for 3D widget like huge UIs.
	* @param bUseMatrix Results will same but it uses different algorithm.
	* @param sRgb Gives more contrast to colors.
	* @param Out_Pages_Bytes Don't use these Base64 results on web. PDFium based Bitmap doesn't work with it.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Get Pages", Keywords = "pdf, pdfium, read, get, pages"), Category = "PDF_Reader|Read")
	static bool PDF_Get_Pages(TMap<UTexture2D*, FVector2D>& Out_Pages, TArray<FPdfBytes>& Out_Pages_Bytes, UPARAM(ref)UPDFiumDoc*& In_PDF, double In_Sampling = 1.0, bool bUseMatrix = false, bool sRgb = false, bool bUseBase64Url = true, FColor BG_Color = FColor::White);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Convert Bytes to Texture2D", Keywords = "pdf, pdfium, read, get, pages, convert, bytes"), Category = "PDF_Reader|Read")
	static bool PDF_Bytes_To_T2D(TMap<UTexture2D*, FVector2D>& Out_Pages, TArray<FPdfBytes> In_Pages_Bytes, bool sRgb = false);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Get Texts", Keywords = "pdf, pdfium, read, get, texts, string"), Category = "PDF_Reader|Read")
	static bool PDF_Get_Texts(TArray<FString>& Out_Texts, UPARAM(ref)UPDFiumDoc*& In_PDF);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Get Links", Keywords = "pdf, pdfium, read, get, text, string, link, web, url"), Category = "PDF_Reader|Read")
	static bool PDF_Get_Links(TArray<FString>& Out_Links, UPARAM(ref)UPDFiumDoc*& In_PDF, int32 PageIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Select Text", Keywords = "pdf, pdfium, read, get, text, string, select, area"), Category = "PDF_Reader|Read")
	static bool PDF_Select_Text(FString& Out_Text, UPARAM(ref)UPDFiumDoc*& In_PDF, FVector2D Start, FVector2D End, int32 PageIndex);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Get Pages Count", ToolTip = "", Keywords = "pdf, pdfium, get, pages, count"), Category = "PDF_Reader|Read")
	static bool PDF_Get_Pages_Count(int32& PagesCount, UPARAM(ref)UPDFiumDoc*& In_PDF);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Create Document", ToolTip = "", Keywords = "pdf, pdfium, create, doc, document, pdf"), Category = "PDF_Reader|Write")
	static bool PDF_Create_Doc(UPDFiumDoc*& Out_PDF);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Pages", ToolTip = "", Keywords = "pdf, pdfium, create, doc, document, pdf, add, pages"), Category = "PDF_Reader|Write")
	static bool PDF_Add_Pages(UPARAM(ref)UPDFiumDoc*& In_PDF, TArray<FVector2D> Pages);

	/**
	* @param FontName Sample font names are "Helvetica-BoldItalic" and "Arial". Don't use space between font name and its specifiers.
	* @param Position X value starts from left, Y value starts from bottom.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Texts as UTF16", Keywords = "pdf, pdfium, create, doc, document, pdf, add, texts"), Category = "PDF_Reader|Write")
	static bool PDF_Add_Texts_UTF16(UPARAM(ref)UPDFiumDoc*& In_PDF, FString In_Texts, FVector2D Position, FVector2D Shear = FVector2D(1.0f, 1.0f), FVector2D Rotation = FVector2D(0.0f, 0.0f), FString FontName = "Helvetica-BoldItalic", int32 FontSize = 12, int32 PageIndex = 0);

	/**
	* @param FontName Sample font names are "Helvetica-BoldItalic" and "Arial". Don't use space between font name and its specifiers.
	* @param Position X value starts from left, Y value starts from bottom.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Texts as Charcodes", Keywords = "pdf, pdfium, create, doc, document, pdf, add, texts"), Category = "PDF_Reader|Write")
	static bool PDF_Add_Texts_Charcodes(UPARAM(ref)UPDFiumDoc*& In_PDF, FString In_Texts, FVector2D Position, FVector2D Shear = FVector2D(1.0f, 1.0f), FVector2D Rotation = FVector2D(0.0f, 0.0f), FString FontName = "Helvetica-BoldItalic", int32 FontSize = 12, int32 PageIndex = 0);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Image", Keywords = "pdf, pdfium, create, doc, document, pdf, add, image"), Category = "PDF_Reader|Write")
	static bool PDF_Add_Image(UPARAM(ref)UPDFiumDoc*& In_PDF, UTexture2D* In_Texts, FVector2D Position, FVector2D Shear = FVector2D(1.0f, 1.0f), FVector2D Rotation = FVector2D(0.0f, 0.0f), FVector2D Scale = FVector2D(512.0f, 512.0f), int32 PageIndex = 0);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Save PDF", ToolTip = "", Keywords = "pdf, pdfium, create, doc, document, pdf, add, texts"), Category = "PDF_Reader|Write")
	static bool PDF_Save_PDF(TMap<UPDFiumDoc*, FString> Exports);

};