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
struct FCharStruct
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	FString EachChar;

	UPROPERTY(BlueprintReadOnly)
	FLinearColor CharColor;

	UPROPERTY(BlueprintReadOnly)
	FVector2D CharPosition;

	UPROPERTY(BlueprintReadOnly)
	double CharSize;

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

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Read from HTTP", ToolTip = "", Keywords = "pdf, pdfium, read, load, path"), Category = "PDF_Reader|Read")
	static bool PDF_Read_HTTP(UArrayObject*& Out_Byte_Object, TArray<uint8> In_Bytes);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Open File", ToolTip = "", Keywords = "pdf, pdfium, read, open"), Category = "PDF_Reader|Read")
	static bool PDF_Read_File_Open(UPDFiumDoc*& Out_PDF, UPARAM(ref)UArrayObject*& In_Byte_Object, FString In_PDF_Password);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Close File", ToolTip = "", Keywords = "pdf, pdfium, read, close"), Category = "PDF_Reader|Read")
	static bool PDF_Read_File_Close(UPARAM(ref)UPDFiumDoc*& In_PDF);

	/**
	* @param Sampling Default value is "1". It generates textures as its default resolution. But "2" gives better result.
	* @param bUseMatrix Results will same but it uses different function.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Generate Texture2D", Keywords = "pdf, pdfium, read, generate, texture, image"), Category = "PDF_Reader|Read")
	static bool PDF_Generate_Bitmap(TMap<UTexture2D*, FVector2D>& Out_Pages, UPARAM(ref)UPDFiumDoc*& In_PDF, double Sampling = 1.0, bool bUseMatrix = false);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Generate Texts", Keywords = "pdf, pdfium, read, generate, text, string"), Category = "PDF_Reader|Read")
	static bool PDF_Generate_Texts(TArray<FString>& Out_Texts, UPARAM(ref)UPDFiumDoc*& In_PDF);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "PDF Reader - Get Pages Count", ToolTip = "", Keywords = "pdf, pdfium, get, page, pages, count"), Category = "PDF_Reader|Read")
	static bool PDF_Get_Pages_Count(int32& PagesCount, UPARAM(ref)UPDFiumDoc*& In_PDF);

};