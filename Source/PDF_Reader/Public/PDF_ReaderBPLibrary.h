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

UCLASS(BlueprintType)
class PDF_READER_API UPDFiumFont : public UObject
{
	GENERATED_BODY()

public:

	FPDF_FONT Font;
};

UENUM(BlueprintType)
enum class EStandartFonts : uint8
{
	Helvetica				UMETA(DisplayName = "Helvetica/Arial"),
	Helvetica_Italic		UMETA(DisplayName = "Helvetica/Arial Italic"),
	Helvetica_Bold			UMETA(DisplayName = "Helvetica/Arial Bold"),
	Helvetica_BoldItalic	UMETA(DisplayName = "Helvetica/Arial Bold Italic"),

	Times_Roman				UMETA(DisplayName = "Times Roman"),
	Times_Bold				UMETA(DisplayName = "Times Bold"),
	Times_BoldItalic		UMETA(DisplayName = "Times Bold Italic"),
	Times_Italic			UMETA(DisplayName = "Times Italic"),

	Courier					UMETA(DisplayName = "Courier"),
	Courier_Bold			UMETA(DisplayName = "Courier Bold"),
	Courier_Oblique			UMETA(DisplayName = "Courier Oblique"),
	Courier_BoldOblique		UMETA(DisplayName = "Courier Bold Oblique"),

	Symbol					UMETA(DisplayName = "Symbol"),
	ZapfDingbats			UMETA(DisplayName = "ZapfDingbats"),
};
ENUM_CLASS_FLAGS(EStandartFonts)

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAddObject, bool, bIsSuccessfull, FString, OutCode);

UCLASS()
class UPDF_ReaderBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Library Init", Keywords = "pdf, pdfium, library, lib, open"), Category = "PDF_Reader|System")
	static bool PDF_LibInit(FString& Out_Code);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Library Close", Keywords = "pdf, pdfium, library, lib, close"), Category = "PDF_Reader|System")
	static bool PDF_LibClose(FString& Out_Code);

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

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Close All Documents", ToolTip = "", Keywords = "pdf, pdfium, read, close, all, documents"), Category = "PDF_Reader|Read")
	static bool PDF_Close_All_Docs();

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

	/*
	* @param Pages It will add pages as same amount of the length of the array to the document. Each page size will be equal to respective indexed Vector 2D
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Pages", Keywords = "pdf, pdfium, create, doc, document, pdf, add, pages"), Category = "PDF_Reader|Write")
	static bool PDF_Add_Pages(UPARAM(ref)UPDFiumDoc*& In_PDF, TArray<FVector2D> Pages);

	/*
	* @param bIsTrueType true will load font as TrueType, false will load as TYPE1.
	* @param bIsCid Look at this link about CID fonts "https://blog.idrsolutions.com/what-are-cid-fonts/"
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Load Font (EXPRIMENTAL! DONT USE IT!)", Keywords = "pdf, pdfium, load, font"), Category = "PDF_Reader|Write")
	static bool PDF_Load_Font(UPDFiumFont*& Out_Font, UPARAM(ref)UPDFiumDoc*& In_PDF, FString Font_Path, bool bIsTrueType, bool bIsCid);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Load Standart Font", ToolTip = "These are 14 standart font which described on PDF Specs 1.7 page 416.\nPDFium (or PDF Specs 1.7) uses same library for both Arial and Helvetica. So, if there are problems with their visualizations or language supports, it is library's owner's responsibility.\n\nZapfDingbats and Symbol really convert your texts into some kind of drawings. It's not an error or language problem, it is what it is.\nActually kawaii btw.", Keywords = "pdf, pdfium, load, font, standart"), Category = "PDF_Reader|Write")
	static bool PDF_Load_Standart_Font(UPDFiumFont*& Out_Font, UPARAM(ref)UPDFiumDoc*& In_PDF, EStandartFonts Font_Name = EStandartFonts::Helvetica);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Close Font", ToolTip = "", Keywords = "pdf, pdfium, close, font"), Category = "PDF_Reader|Write")
	static bool PDF_Close_Font(UPARAM(ref)UPDFiumFont*& In_Font);

	/**
	* @param Position X value starts from left, Y value starts from bottom.
	* @param bUseCharcodes It switch between "FPDFText_SetCharcodes()" and "FPDFText_SetText()". When you enable CharCodes, you don't need to write your texts as ASCII decimals. System automatically converts it. Also it supports much more characters.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Texts", Keywords = "pdf, pdfium, create, doc, document, pdf, add, texts"), Category = "PDF_Reader|Write")
	static void PDF_Add_Texts(FDelegateAddObject DelegateAddObject, UPARAM(ref)UPDFiumDoc*& In_PDF, UPARAM(ref)UPDFiumFont*& In_Font, FString In_Texts, FVector2D Position, FVector2D Shear = FVector2D(1.0f, 1.0f), FVector2D Rotation = FVector2D(0.0f, 0.0f), FVector2D Border = FVector2D(10.0f, 10.0f), int32 FontSize = 12, int32 PageIndex = 0, bool bUseCharcodes = true, bool bGetCharcodesFromDb = false);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Add Image (EXPRIMENTAL! DONT USE IT!)", Keywords = "pdf, pdfium, create, doc, document, pdf, add, image"), Category = "PDF_Reader|Write")
	static bool PDF_Add_Image(UPARAM(ref)UPDFiumDoc*& In_PDF, UTexture2D* In_Texture, FVector2D Position, FVector2D Shear = FVector2D(1.0f, 1.0f), FVector2D Rotation = FVector2D(0.0f, 0.0f), int32 PageIndex = 0);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Save PDF", ToolTip = "", Keywords = "pdf, pdfium, create, doc, document, pdf, add, texts"), Category = "PDF_Reader|Write")
	static bool PDF_Save_PDF(TMap<UPDFiumDoc*, FString> Exports);

};