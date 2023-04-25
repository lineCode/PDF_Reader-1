// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDF_Reader/Public/PDF_ReaderBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDF_ReaderBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UArrayObject();
	PDF_READER_API UClass* Z_Construct_UClass_UArrayObject_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumFont();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumFont_NoRegister();
	PDF_READER_API UEnum* Z_Construct_UEnum_PDF_Reader_EStandartFonts();
	PDF_READER_API UFunction* Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature();
	PDF_READER_API UScriptStruct* Z_Construct_UScriptStruct_FPdfBytes();
	UPackage* Z_Construct_UPackage__Script_PDF_Reader();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PdfBytes;
class UScriptStruct* FPdfBytes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PdfBytes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PdfBytes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPdfBytes, Z_Construct_UPackage__Script_PDF_Reader(), TEXT("PdfBytes"));
	}
	return Z_Registration_Info_UScriptStruct_PdfBytes.OuterSingleton;
}
template<> PDF_READER_API UScriptStruct* StaticStruct<FPdfBytes>()
{
	return FPdfBytes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPdfBytes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Bytes_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Original_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Original_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sampling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBase64Url_MetaData[];
#endif
		static void NewProp_bUseBase64Url_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBase64Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPdfBytes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09PDFium Binaries\n*\x09https://github.com/bblanchon/pdfium-binaries/releases\n*\x09https://github.com/barteksc/PdfiumAndroid\n*/" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "*      PDFium Binaries\n*      https://github.com/bblanchon/pdfium-binaries/releases\n*      https://github.com/barteksc/PdfiumAndroid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPdfBytes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPdfBytes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Bytes_String_MetaData[] = {
		{ "Category", "PdfBytes" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Bytes_String = { "Bytes_String", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPdfBytes, Bytes_String), METADATA_PARAMS(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Bytes_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Bytes_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Original_Resolution_MetaData[] = {
		{ "Category", "PdfBytes" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Original_Resolution = { "Original_Resolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPdfBytes, Original_Resolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Original_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Original_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Sampling_MetaData[] = {
		{ "Category", "PdfBytes" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Sampling = { "Sampling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPdfBytes, Sampling), METADATA_PARAMS(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Sampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Sampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url_MetaData[] = {
		{ "Category", "PdfBytes" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url_SetBit(void* Obj)
	{
		((FPdfBytes*)Obj)->bUseBase64Url = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url = { "bUseBase64Url", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPdfBytes), &Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPdfBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Bytes_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Original_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_Sampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPdfBytes_Statics::NewProp_bUseBase64Url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPdfBytes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
		nullptr,
		&NewStructOps,
		"PdfBytes",
		sizeof(FPdfBytes),
		alignof(FPdfBytes),
		Z_Construct_UScriptStruct_FPdfBytes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPdfBytes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPdfBytes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPdfBytes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPdfBytes()
	{
		if (!Z_Registration_Info_UScriptStruct_PdfBytes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PdfBytes.InnerSingleton, Z_Construct_UScriptStruct_FPdfBytes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PdfBytes.InnerSingleton;
	}
	void UArrayObject::StaticRegisterNativesUArrayObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArrayObject);
	UClass* Z_Construct_UClass_UArrayObject_NoRegister()
	{
		return UArrayObject::StaticClass();
	}
	struct Z_Construct_UClass_UArrayObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArrayObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrayObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDF_ReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArrayObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArrayObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArrayObject_Statics::ClassParams = {
		&UArrayObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArrayObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArrayObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArrayObject()
	{
		if (!Z_Registration_Info_UClass_UArrayObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArrayObject.OuterSingleton, Z_Construct_UClass_UArrayObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArrayObject.OuterSingleton;
	}
	template<> PDF_READER_API UClass* StaticClass<UArrayObject>()
	{
		return UArrayObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArrayObject);
	UArrayObject::~UArrayObject() {}
	void UPDFiumDoc::StaticRegisterNativesUPDFiumDoc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDFiumDoc);
	UClass* Z_Construct_UClass_UPDFiumDoc_NoRegister()
	{
		return UPDFiumDoc::StaticClass();
	}
	struct Z_Construct_UClass_UPDFiumDoc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFiumDoc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFiumDoc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDF_ReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFiumDoc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFiumDoc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDFiumDoc_Statics::ClassParams = {
		&UPDFiumDoc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFiumDoc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFiumDoc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFiumDoc()
	{
		if (!Z_Registration_Info_UClass_UPDFiumDoc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDFiumDoc.OuterSingleton, Z_Construct_UClass_UPDFiumDoc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDFiumDoc.OuterSingleton;
	}
	template<> PDF_READER_API UClass* StaticClass<UPDFiumDoc>()
	{
		return UPDFiumDoc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFiumDoc);
	UPDFiumDoc::~UPDFiumDoc() {}
	void UPDFiumFont::StaticRegisterNativesUPDFiumFont()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDFiumFont);
	UClass* Z_Construct_UClass_UPDFiumFont_NoRegister()
	{
		return UPDFiumFont::StaticClass();
	}
	struct Z_Construct_UClass_UPDFiumFont_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFiumFont_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFiumFont_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDF_ReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFiumFont_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFiumFont>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDFiumFont_Statics::ClassParams = {
		&UPDFiumFont::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFiumFont_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFiumFont_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFiumFont()
	{
		if (!Z_Registration_Info_UClass_UPDFiumFont.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDFiumFont.OuterSingleton, Z_Construct_UClass_UPDFiumFont_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDFiumFont.OuterSingleton;
	}
	template<> PDF_READER_API UClass* StaticClass<UPDFiumFont>()
	{
		return UPDFiumFont::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFiumFont);
	UPDFiumFont::~UPDFiumFont() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStandartFonts;
	static UEnum* EStandartFonts_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStandartFonts.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStandartFonts.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PDF_Reader_EStandartFonts, Z_Construct_UPackage__Script_PDF_Reader(), TEXT("EStandartFonts"));
		}
		return Z_Registration_Info_UEnum_EStandartFonts.OuterSingleton;
	}
	template<> PDF_READER_API UEnum* StaticEnum<EStandartFonts>()
	{
		return EStandartFonts_StaticEnum();
	}
	struct Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::Enumerators[] = {
		{ "EStandartFonts::Helvetica", (int64)EStandartFonts::Helvetica },
		{ "EStandartFonts::Helvetica_Italic", (int64)EStandartFonts::Helvetica_Italic },
		{ "EStandartFonts::Helvetica_Bold", (int64)EStandartFonts::Helvetica_Bold },
		{ "EStandartFonts::Helvetica_BoldItalic", (int64)EStandartFonts::Helvetica_BoldItalic },
		{ "EStandartFonts::Times_Roman", (int64)EStandartFonts::Times_Roman },
		{ "EStandartFonts::Times_Bold", (int64)EStandartFonts::Times_Bold },
		{ "EStandartFonts::Times_BoldItalic", (int64)EStandartFonts::Times_BoldItalic },
		{ "EStandartFonts::Times_Italic", (int64)EStandartFonts::Times_Italic },
		{ "EStandartFonts::Courier", (int64)EStandartFonts::Courier },
		{ "EStandartFonts::Courier_Bold", (int64)EStandartFonts::Courier_Bold },
		{ "EStandartFonts::Courier_Oblique", (int64)EStandartFonts::Courier_Oblique },
		{ "EStandartFonts::Courier_BoldOblique", (int64)EStandartFonts::Courier_BoldOblique },
		{ "EStandartFonts::Symbol", (int64)EStandartFonts::Symbol },
		{ "EStandartFonts::ZapfDingbats", (int64)EStandartFonts::ZapfDingbats },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Courier.DisplayName", "Courier" },
		{ "Courier.Name", "EStandartFonts::Courier" },
		{ "Courier_Bold.DisplayName", "Courier Bold" },
		{ "Courier_Bold.Name", "EStandartFonts::Courier_Bold" },
		{ "Courier_BoldOblique.DisplayName", "Courier Bold Oblique" },
		{ "Courier_BoldOblique.Name", "EStandartFonts::Courier_BoldOblique" },
		{ "Courier_Oblique.DisplayName", "Courier Oblique" },
		{ "Courier_Oblique.Name", "EStandartFonts::Courier_Oblique" },
		{ "Helvetica.DisplayName", "Helvetica/Arial" },
		{ "Helvetica.Name", "EStandartFonts::Helvetica" },
		{ "Helvetica_Bold.DisplayName", "Helvetica/Arial Bold" },
		{ "Helvetica_Bold.Name", "EStandartFonts::Helvetica_Bold" },
		{ "Helvetica_BoldItalic.DisplayName", "Helvetica/Arial Bold Italic" },
		{ "Helvetica_BoldItalic.Name", "EStandartFonts::Helvetica_BoldItalic" },
		{ "Helvetica_Italic.DisplayName", "Helvetica/Arial Italic" },
		{ "Helvetica_Italic.Name", "EStandartFonts::Helvetica_Italic" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "Symbol.DisplayName", "Symbol" },
		{ "Symbol.Name", "EStandartFonts::Symbol" },
		{ "Times_Bold.DisplayName", "Times Bold" },
		{ "Times_Bold.Name", "EStandartFonts::Times_Bold" },
		{ "Times_BoldItalic.DisplayName", "Times Bold Italic" },
		{ "Times_BoldItalic.Name", "EStandartFonts::Times_BoldItalic" },
		{ "Times_Italic.DisplayName", "Times Italic" },
		{ "Times_Italic.Name", "EStandartFonts::Times_Italic" },
		{ "Times_Roman.DisplayName", "Times Roman" },
		{ "Times_Roman.Name", "EStandartFonts::Times_Roman" },
		{ "ZapfDingbats.DisplayName", "ZapfDingbats" },
		{ "ZapfDingbats.Name", "EStandartFonts::ZapfDingbats" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PDF_Reader,
		nullptr,
		"EStandartFonts",
		"EStandartFonts",
		Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PDF_Reader_EStandartFonts()
	{
		if (!Z_Registration_Info_UEnum_EStandartFonts.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStandartFonts.InnerSingleton, Z_Construct_UEnum_PDF_Reader_EStandartFonts_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStandartFonts.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics
	{
		struct _Script_PDF_Reader_eventDelegateAddObject_Parms
		{
			bool bIsSuccessfull;
			FString OutCode;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_PDF_Reader_eventDelegateAddObject_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PDF_Reader_eventDelegateAddObject_Parms), &Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PDF_Reader_eventDelegateAddObject_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::NewProp_OutCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PDF_Reader, nullptr, "DelegateAddObject__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::_Script_PDF_Reader_eventDelegateAddObject_Parms), Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Save_PDF)
	{
		P_GET_TMAP(UPDFiumDoc*,FString,Z_Param_Exports);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Save_PDF(Z_Param_Exports);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Add_Image)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_OBJECT(UTexture2D,Z_Param_In_Texture);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_STRUCT(FVector2D,Z_Param_Shear);
		P_GET_STRUCT(FVector2D,Z_Param_Rotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Add_Image(Z_Param_Out_In_PDF,Z_Param_In_Texture,Z_Param_Position,Z_Param_Shear,Z_Param_Rotation,Z_Param_PageIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Add_Texts)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateAddObject);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_OBJECT_REF(UPDFiumFont,Z_Param_Out_In_Font);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Texts);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_STRUCT(FVector2D,Z_Param_Shear);
		P_GET_STRUCT(FVector2D,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_Border);
		P_GET_PROPERTY(FIntProperty,Z_Param_FontSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_UBOOL(Z_Param_bUseCharcodes);
		P_GET_UBOOL(Z_Param_bGetCharcodesFromDb);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDF_ReaderBPLibrary::PDF_Add_Texts(FDelegateAddObject(Z_Param_DelegateAddObject),Z_Param_Out_In_PDF,Z_Param_Out_In_Font,Z_Param_In_Texts,Z_Param_Position,Z_Param_Shear,Z_Param_Rotation,Z_Param_Border,Z_Param_FontSize,Z_Param_PageIndex,Z_Param_bUseCharcodes,Z_Param_bGetCharcodesFromDb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Close_Font)
	{
		P_GET_OBJECT_REF(UPDFiumFont,Z_Param_Out_In_Font);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Close_Font(Z_Param_Out_In_Font);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Load_Standart_Font)
	{
		P_GET_OBJECT_REF(UPDFiumFont,Z_Param_Out_Out_Font);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_ENUM(EStandartFonts,Z_Param_Font_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Load_Standart_Font(Z_Param_Out_Out_Font,Z_Param_Out_In_PDF,EStandartFonts(Z_Param_Font_Name));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Load_Font)
	{
		P_GET_OBJECT_REF(UPDFiumFont,Z_Param_Out_Out_Font);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_PROPERTY(FStrProperty,Z_Param_Font_Path);
		P_GET_UBOOL(Z_Param_bIsTrueType);
		P_GET_UBOOL(Z_Param_bIsCid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Load_Font(Z_Param_Out_Out_Font,Z_Param_Out_In_PDF,Z_Param_Font_Path,Z_Param_bIsTrueType,Z_Param_bIsCid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Add_Pages)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_TARRAY(FVector2D,Z_Param_Pages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Add_Pages(Z_Param_Out_In_PDF,Z_Param_Pages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Create_Doc)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_Out_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Create_Doc(Z_Param_Out_Out_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_Pages_Count)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PagesCount);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Pages_Count(Z_Param_Out_PagesCount,Z_Param_Out_In_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Select_Text)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Text);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_STRUCT(FVector2D,Z_Param_Start);
		P_GET_STRUCT(FVector2D,Z_Param_End);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Select_Text(Z_Param_Out_Out_Text,Z_Param_Out_In_PDF,Z_Param_Start,Z_Param_End,Z_Param_PageIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_Links)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out_Links);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Links(Z_Param_Out_Out_Links,Z_Param_Out_In_PDF,Z_Param_PageIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_Texts)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out_Texts);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Texts(Z_Param_Out_Out_Texts,Z_Param_Out_In_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Bytes_To_T2D)
	{
		P_GET_TMAP_REF(UTexture2D*,FVector2D,Z_Param_Out_Out_Pages);
		P_GET_TARRAY(FPdfBytes,Z_Param_In_Pages_Bytes);
		P_GET_UBOOL(Z_Param_sRgb);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Bytes_To_T2D(Z_Param_Out_Out_Pages,Z_Param_In_Pages_Bytes,Z_Param_sRgb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_Pages)
	{
		P_GET_TMAP_REF(UTexture2D*,FVector2D,Z_Param_Out_Out_Pages);
		P_GET_TARRAY_REF(FPdfBytes,Z_Param_Out_Out_Pages_Bytes);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_In_Sampling);
		P_GET_UBOOL(Z_Param_bUseMatrix);
		P_GET_UBOOL(Z_Param_sRgb);
		P_GET_UBOOL(Z_Param_bUseBase64Url);
		P_GET_STRUCT(FColor,Z_Param_BG_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Pages(Z_Param_Out_Out_Pages,Z_Param_Out_Out_Pages_Bytes,Z_Param_Out_In_PDF,Z_Param_In_Sampling,Z_Param_bUseMatrix,Z_Param_sRgb,Z_Param_bUseBase64Url,Z_Param_BG_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Close_All_Docs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Close_All_Docs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_File_Close)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_File_Close(Z_Param_Out_In_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_File_Open)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_Out_PDF);
		P_GET_OBJECT_REF(UArrayObject,Z_Param_Out_In_Byte_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_File_Open(Z_Param_Out_Out_PDF,Z_Param_Out_In_Byte_Object,Z_Param_In_PDF_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Read_Bytes)
	{
		P_GET_OBJECT_REF(UArrayObject,Z_Param_Out_Out_Byte_Object);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Read_Bytes(Z_Param_Out_Out_Byte_Object,Z_Param_In_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Read_Path)
	{
		P_GET_OBJECT_REF(UArrayObject,Z_Param_Out_Out_Byte_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Read_Path(Z_Param_Out_Out_Byte_Object,Z_Param_In_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Android_Path_Helper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Android_Path_Helper(Z_Param_InFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_LibState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_LibState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_LibClose)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_LibClose(Z_Param_Out_Out_Code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_LibInit)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_LibInit(Z_Param_Out_Out_Code);
		P_NATIVE_END;
	}
	void UPDF_ReaderBPLibrary::StaticRegisterNativesUPDF_ReaderBPLibrary()
	{
		UClass* Class = UPDF_ReaderBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PDF_Add_Image", &UPDF_ReaderBPLibrary::execPDF_Add_Image },
			{ "PDF_Add_Pages", &UPDF_ReaderBPLibrary::execPDF_Add_Pages },
			{ "PDF_Add_Texts", &UPDF_ReaderBPLibrary::execPDF_Add_Texts },
			{ "PDF_Android_Path_Helper", &UPDF_ReaderBPLibrary::execPDF_Android_Path_Helper },
			{ "PDF_Bytes_To_T2D", &UPDF_ReaderBPLibrary::execPDF_Bytes_To_T2D },
			{ "PDF_Close_All_Docs", &UPDF_ReaderBPLibrary::execPDF_Close_All_Docs },
			{ "PDF_Close_Font", &UPDF_ReaderBPLibrary::execPDF_Close_Font },
			{ "PDF_Create_Doc", &UPDF_ReaderBPLibrary::execPDF_Create_Doc },
			{ "PDF_File_Close", &UPDF_ReaderBPLibrary::execPDF_File_Close },
			{ "PDF_File_Open", &UPDF_ReaderBPLibrary::execPDF_File_Open },
			{ "PDF_Get_Links", &UPDF_ReaderBPLibrary::execPDF_Get_Links },
			{ "PDF_Get_Pages", &UPDF_ReaderBPLibrary::execPDF_Get_Pages },
			{ "PDF_Get_Pages_Count", &UPDF_ReaderBPLibrary::execPDF_Get_Pages_Count },
			{ "PDF_Get_Texts", &UPDF_ReaderBPLibrary::execPDF_Get_Texts },
			{ "PDF_LibClose", &UPDF_ReaderBPLibrary::execPDF_LibClose },
			{ "PDF_LibInit", &UPDF_ReaderBPLibrary::execPDF_LibInit },
			{ "PDF_LibState", &UPDF_ReaderBPLibrary::execPDF_LibState },
			{ "PDF_Load_Font", &UPDF_ReaderBPLibrary::execPDF_Load_Font },
			{ "PDF_Load_Standart_Font", &UPDF_ReaderBPLibrary::execPDF_Load_Standart_Font },
			{ "PDF_Read_Bytes", &UPDF_ReaderBPLibrary::execPDF_Read_Bytes },
			{ "PDF_Read_Path", &UPDF_ReaderBPLibrary::execPDF_Read_Path },
			{ "PDF_Save_PDF", &UPDF_ReaderBPLibrary::execPDF_Save_PDF },
			{ "PDF_Select_Text", &UPDF_ReaderBPLibrary::execPDF_Select_Text },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms
		{
			UPDFiumDoc* In_PDF;
			UTexture2D* In_Texture;
			FVector2D Position;
			FVector2D Shear;
			FVector2D Rotation;
			int32 PageIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shear;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_In_Texture = { "In_Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms, In_Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms, Shear), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms, Rotation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_In_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_Shear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "CPP_Default_PageIndex", "0" },
		{ "CPP_Default_Rotation", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_Shear", "(X=1.000,Y=1.000)" },
		{ "DisplayName", "PDF Reader - Add Image (EXPRIMENTAL! DONT USE IT!)" },
		{ "Keywords", "pdf, pdfium, create, doc, document, pdf, add, image" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Add_Image", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::PDF_ReaderBPLibrary_eventPDF_Add_Image_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Add_Pages_Parms
		{
			UPDFiumDoc* In_PDF;
			TArray<FVector2D> Pages;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pages_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pages;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Pages_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_Pages_Inner = { "Pages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_Pages = { "Pages", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Pages_Parms, Pages), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Add_Pages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Add_Pages_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_Pages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_Pages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "Comment", "/*\n\x09* @param Pages It will add pages as same amount of the length of the array to the document. Each page size will be equal to respective indexed Vector 2D\n\x09*/" },
		{ "DisplayName", "PDF Reader - Add Pages" },
		{ "Keywords", "pdf, pdfium, create, doc, document, pdf, add, pages" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "* @param Pages It will add pages as same amount of the length of the array to the document. Each page size will be equal to respective indexed Vector 2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Add_Pages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::PDF_ReaderBPLibrary_eventPDF_Add_Pages_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms
		{
			FScriptDelegate DelegateAddObject;
			UPDFiumDoc* In_PDF;
			UPDFiumFont* In_Font;
			FString In_Texts;
			FVector2D Position;
			FVector2D Shear;
			FVector2D Rotation;
			FVector2D Border;
			int32 FontSize;
			int32 PageIndex;
			bool bUseCharcodes;
			bool bGetCharcodesFromDb;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateAddObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Font;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Texts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shear;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Border;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static void NewProp_bUseCharcodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharcodes;
		static void NewProp_bGetCharcodesFromDb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetCharcodesFromDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_DelegateAddObject = { "DelegateAddObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, DelegateAddObject), Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1981911638
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_In_Font = { "In_Font", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, In_Font), Z_Construct_UClass_UPDFiumFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_In_Texts = { "In_Texts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, In_Texts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, Shear), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, Rotation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Border = { "Border", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, Border), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, FontSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bUseCharcodes_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms*)Obj)->bUseCharcodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bUseCharcodes = { "bUseCharcodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bUseCharcodes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bGetCharcodesFromDb_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms*)Obj)->bGetCharcodesFromDb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bGetCharcodesFromDb = { "bGetCharcodesFromDb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bGetCharcodesFromDb_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_DelegateAddObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_In_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_In_Texts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Shear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_Border,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bUseCharcodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::NewProp_bGetCharcodesFromDb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "Comment", "/**\n\x09* @param Position X value starts from left, Y value starts from bottom.\n\x09* @param bUseCharcodes It switch between \"FPDFText_SetCharcodes()\" and \"FPDFText_SetText()\". When you enable CharCodes, you don't need to write your texts as ASCII decimals. System automatically converts it. Also it supports much more characters.\n\x09*/" },
		{ "CPP_Default_bGetCharcodesFromDb", "false" },
		{ "CPP_Default_Border", "(X=10.000,Y=10.000)" },
		{ "CPP_Default_bUseCharcodes", "true" },
		{ "CPP_Default_FontSize", "12" },
		{ "CPP_Default_PageIndex", "0" },
		{ "CPP_Default_Rotation", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_Shear", "(X=1.000,Y=1.000)" },
		{ "DisplayName", "PDF Reader - Add Texts" },
		{ "Keywords", "pdf, pdfium, create, doc, document, pdf, add, texts" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "@param Position X value starts from left, Y value starts from bottom.\n@param bUseCharcodes It switch between \"FPDFText_SetCharcodes()\" and \"FPDFText_SetText()\". When you enable CharCodes, you don't need to write your texts as ASCII decimals. System automatically converts it. Also it supports much more characters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Add_Texts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::PDF_ReaderBPLibrary_eventPDF_Add_Texts_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Android_Path_Helper_Parms
		{
			FString InFileName;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Android_Path_Helper_Parms, InFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Android_Path_Helper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::NewProp_InFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read|Helpers" },
		{ "DisplayName", "PDF Reader - Mobile Path Helper" },
		{ "Keywords", "pdf, pdfium, android, ios, mobile, folder, file, path, helper" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "This node automatically gives Internal Storage absolute path. So, you just need to define sub-folder and pdf file. Example: Download/sample.pdf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Android_Path_Helper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::PDF_ReaderBPLibrary_eventPDF_Android_Path_Helper_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms
		{
			TMap<UTexture2D*,FVector2D> Out_Pages;
			TArray<FPdfBytes> In_Pages_Bytes;
			bool sRgb;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Pages_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Pages_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Out_Pages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Pages_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Pages_Bytes;
		static void NewProp_sRgb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sRgb;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_Out_Pages_ValueProp = { "Out_Pages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_Out_Pages_Key_KeyProp = { "Out_Pages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_Out_Pages = { "Out_Pages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms, Out_Pages), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_In_Pages_Bytes_Inner = { "In_Pages_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPdfBytes, METADATA_PARAMS(nullptr, 0) }; // 187784250
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_In_Pages_Bytes = { "In_Pages_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms, In_Pages_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 187784250
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_sRgb_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms*)Obj)->sRgb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_sRgb = { "sRgb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_sRgb_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_Out_Pages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_Out_Pages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_Out_Pages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_In_Pages_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_In_Pages_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_sRgb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "CPP_Default_sRgb", "false" },
		{ "DisplayName", "PDF Reader - Convert Bytes to Texture2D" },
		{ "Keywords", "pdf, pdfium, read, get, pages, convert, bytes" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Bytes_To_T2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::PDF_ReaderBPLibrary_eventPDF_Bytes_To_T2D_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Close_All_Docs_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Close_All_Docs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Close_All_Docs_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Close All Documents" },
		{ "Keywords", "pdf, pdfium, read, close, all, documents" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Close_All_Docs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::PDF_ReaderBPLibrary_eventPDF_Close_All_Docs_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Close_Font_Parms
		{
			UPDFiumFont* In_Font;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Font;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::NewProp_In_Font = { "In_Font", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Close_Font_Parms, In_Font), Z_Construct_UClass_UPDFiumFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Close_Font_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Close_Font_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::NewProp_In_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "DisplayName", "PDF Reader - Close Font" },
		{ "Keywords", "pdf, pdfium, close, font" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Close_Font", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::PDF_ReaderBPLibrary_eventPDF_Close_Font_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Create_Doc_Parms
		{
			UPDFiumDoc* Out_PDF;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_PDF;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::NewProp_Out_PDF = { "Out_PDF", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Create_Doc_Parms, Out_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Create_Doc_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Create_Doc_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::NewProp_Out_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "DisplayName", "PDF Reader - Create Document" },
		{ "Keywords", "pdf, pdfium, create, doc, document, pdf" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Create_Doc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::PDF_ReaderBPLibrary_eventPDF_Create_Doc_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_File_Close_Parms
		{
			UPDFiumDoc* In_PDF;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_File_Close_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_File_Close_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_File_Close_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Close File" },
		{ "Keywords", "pdf, pdfium, read, close" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_File_Close", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::PDF_ReaderBPLibrary_eventPDF_File_Close_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_File_Open_Parms
		{
			UPDFiumDoc* Out_PDF;
			UArrayObject* In_Byte_Object;
			FString In_PDF_Password;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_PDF;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Byte_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_PDF_Password;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_Out_PDF = { "Out_PDF", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_File_Open_Parms, Out_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_In_Byte_Object = { "In_Byte_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_File_Open_Parms, In_Byte_Object), Z_Construct_UClass_UArrayObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_File_Open_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_File_Open_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_File_Open_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_Out_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_In_Byte_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_In_PDF_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Open File" },
		{ "Keywords", "pdf, pdfium, read, open" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_File_Open", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::PDF_ReaderBPLibrary_eventPDF_File_Open_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms
		{
			TArray<FString> Out_Links;
			UPDFiumDoc* In_PDF;
			int32 PageIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Links_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Links;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_Out_Links_Inner = { "Out_Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_Out_Links = { "Out_Links", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms, Out_Links), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_Out_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_Out_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Get Links" },
		{ "Keywords", "pdf, pdfium, read, get, text, string, link, web, url" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_Links", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::PDF_ReaderBPLibrary_eventPDF_Get_Links_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms
		{
			TMap<UTexture2D*,FVector2D> Out_Pages;
			TArray<FPdfBytes> Out_Pages_Bytes;
			UPDFiumDoc* In_PDF;
			double In_Sampling;
			bool bUseMatrix;
			bool sRgb;
			bool bUseBase64Url;
			FColor BG_Color;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Pages_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Pages_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Out_Pages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Pages_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Pages_Bytes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_In_Sampling;
		static void NewProp_bUseMatrix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMatrix;
		static void NewProp_sRgb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sRgb;
		static void NewProp_bUseBase64Url_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBase64Url;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BG_Color;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_ValueProp = { "Out_Pages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_Key_KeyProp = { "Out_Pages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages = { "Out_Pages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms, Out_Pages), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_Bytes_Inner = { "Out_Pages_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPdfBytes, METADATA_PARAMS(nullptr, 0) }; // 187784250
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_Bytes = { "Out_Pages_Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms, Out_Pages_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 187784250
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_In_Sampling = { "In_Sampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms, In_Sampling), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseMatrix_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms*)Obj)->bUseMatrix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseMatrix = { "bUseMatrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseMatrix_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_sRgb_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms*)Obj)->sRgb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_sRgb = { "sRgb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_sRgb_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseBase64Url_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms*)Obj)->bUseBase64Url = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseBase64Url = { "bUseBase64Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseBase64Url_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_BG_Color = { "BG_Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms, BG_Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_Out_Pages_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_In_Sampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_sRgb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_bUseBase64Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_BG_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "Comment", "/**\n\x09* @param In_Sampling Default (also minimum) value is \"1\" but \"2\" gives best result for A4 sized PDF on 17 inch notebook screen. Bigger values is good for 3D widget like huge UIs.\n\x09* @param bUseMatrix Results will same but it uses different algorithm.\n\x09* @param sRgb Gives more contrast to colors.\n\x09* @param Out_Pages_Bytes Don't use these Base64 results on web. PDFium based Bitmap doesn't work with it.\n\x09*/" },
		{ "CPP_Default_BG_Color", "(R=255,G=255,B=255,A=255)" },
		{ "CPP_Default_bUseBase64Url", "true" },
		{ "CPP_Default_bUseMatrix", "false" },
		{ "CPP_Default_In_Sampling", "1.000000" },
		{ "CPP_Default_sRgb", "false" },
		{ "DisplayName", "PDF Reader - Get Pages" },
		{ "Keywords", "pdf, pdfium, read, get, pages" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "@param In_Sampling Default (also minimum) value is \"1\" but \"2\" gives best result for A4 sized PDF on 17 inch notebook screen. Bigger values is good for 3D widget like huge UIs.\n@param bUseMatrix Results will same but it uses different algorithm.\n@param sRgb Gives more contrast to colors.\n@param Out_Pages_Bytes Don't use these Base64 results on web. PDFium based Bitmap doesn't work with it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_Pages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms
		{
			int32 PagesCount;
			UPDFiumDoc* In_PDF;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PagesCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_PagesCount = { "PagesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms, PagesCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_PagesCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Get Pages Count" },
		{ "Keywords", "pdf, pdfium, get, pages, count" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_Pages_Count", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_Texts_Parms
		{
			TArray<FString> Out_Texts;
			UPDFiumDoc* In_PDF;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Texts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Texts;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_Out_Texts_Inner = { "Out_Texts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_Out_Texts = { "Out_Texts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Texts_Parms, Out_Texts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Texts_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Texts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Texts_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_Out_Texts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_Out_Texts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Get Texts" },
		{ "Keywords", "pdf, pdfium, read, get, texts, string" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_Texts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::PDF_ReaderBPLibrary_eventPDF_Get_Texts_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_LibClose_Parms
		{
			FString Out_Code;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_LibClose_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_LibClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_LibClose_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|System" },
		{ "DisplayName", "PDF Reader - Library Close" },
		{ "Keywords", "pdf, pdfium, library, lib, close" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_LibClose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::PDF_ReaderBPLibrary_eventPDF_LibClose_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_LibInit_Parms
		{
			FString Out_Code;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_LibInit_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_LibInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_LibInit_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|System" },
		{ "DisplayName", "PDF Reader - Library Init" },
		{ "Keywords", "pdf, pdfium, library, lib, open" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_LibInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::PDF_ReaderBPLibrary_eventPDF_LibInit_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_LibState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_LibState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_LibState_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|System" },
		{ "DisplayName", "PDF Reader - Library State" },
		{ "Keywords", "pdf, pdfium, library, state, get, is, initialized" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_LibState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::PDF_ReaderBPLibrary_eventPDF_LibState_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms
		{
			UPDFiumFont* Out_Font;
			UPDFiumDoc* In_PDF;
			FString Font_Path;
			bool bIsTrueType;
			bool bIsCid;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Font;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Font_Path;
		static void NewProp_bIsTrueType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTrueType;
		static void NewProp_bIsCid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_Out_Font = { "Out_Font", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms, Out_Font), Z_Construct_UClass_UPDFiumFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_Font_Path = { "Font_Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms, Font_Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsTrueType_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms*)Obj)->bIsTrueType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsTrueType = { "bIsTrueType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsTrueType_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsCid_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms*)Obj)->bIsCid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsCid = { "bIsCid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsCid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_Out_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_Font_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsTrueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_bIsCid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "Comment", "/*\n\x09* @param bIsTrueType true will load font as TrueType, false will load as TYPE1.\n\x09* @param bIsCid Look at this link about CID fonts \"https://blog.idrsolutions.com/what-are-cid-fonts/\"\n\x09*/" },
		{ "DisplayName", "PDF Reader - Load Font (EXPRIMENTAL! DONT USE IT!)" },
		{ "Keywords", "pdf, pdfium, load, font" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "* @param bIsTrueType true will load font as TrueType, false will load as TYPE1.\n* @param bIsCid Look at this link about CID fonts \"https://blog.idrsolutions.com/what-are-cid-fonts/\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Load_Font", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::PDF_ReaderBPLibrary_eventPDF_Load_Font_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms
		{
			UPDFiumFont* Out_Font;
			UPDFiumDoc* In_PDF;
			EStandartFonts Font_Name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Font;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Font_Name_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Font_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_Out_Font = { "Out_Font", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms, Out_Font), Z_Construct_UClass_UPDFiumFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_Font_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_Font_Name = { "Font_Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms, Font_Name), Z_Construct_UEnum_PDF_Reader_EStandartFonts, METADATA_PARAMS(nullptr, 0) }; // 3595226983
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_Out_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_Font_Name_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_Font_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "CPP_Default_Font_Name", "Helvetica" },
		{ "DisplayName", "PDF Reader - Load Standart Font" },
		{ "Keywords", "pdf, pdfium, load, font, standart" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "These are 14 standart font which described on PDF Specs 1.7 page 416.\nPDFium (or PDF Specs 1.7) uses same library for both Arial and Helvetica. So, if there are problems with their visualizations or language supports, it is library's owner's responsibility.\n\nZapfDingbats and Symbol really convert your texts into some kind of drawings. It's not an error or language problem, it is what it is.\nActually kawaii btw." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Load_Standart_Font", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::PDF_ReaderBPLibrary_eventPDF_Load_Standart_Font_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Read_Bytes_Parms
		{
			UArrayObject* Out_Byte_Object;
			TArray<uint8> In_Bytes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Byte_Object;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Bytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_Out_Byte_Object = { "Out_Byte_Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_Bytes_Parms, Out_Byte_Object), Z_Construct_UClass_UArrayObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_Bytes_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Read_Bytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Read_Bytes_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_Out_Byte_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Read from Bytes" },
		{ "Keywords", "pdf, pdfium, read, load, path" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Read_Bytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::PDF_ReaderBPLibrary_eventPDF_Read_Bytes_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms
		{
			UArrayObject* Out_Byte_Object;
			FString In_Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Byte_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_Out_Byte_Object = { "Out_Byte_Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms, Out_Byte_Object), Z_Construct_UClass_UArrayObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_In_Path = { "In_Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms, In_Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_Out_Byte_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_In_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Read from Path" },
		{ "Keywords", "pdf, pdfium, read, load, path" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "You need to use absolute platform path. You can use \"PDF Reader - Mobile Path Helper\" to generate it for mobile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Read_Path", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Save_PDF_Parms
		{
			TMap<UPDFiumDoc*,FString> Exports;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Exports_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Exports_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Exports;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_Exports_ValueProp = { "Exports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_Exports_Key_KeyProp = { "Exports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_Exports = { "Exports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Save_PDF_Parms, Exports), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Save_PDF_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Save_PDF_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_Exports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_Exports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_Exports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Write" },
		{ "DisplayName", "PDF Reader - Save PDF" },
		{ "Keywords", "pdf, pdfium, create, doc, document, pdf, add, texts" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Save_PDF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::PDF_ReaderBPLibrary_eventPDF_Save_PDF_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms
		{
			FString Out_Text;
			UPDFiumDoc* In_PDF;
			FVector2D Start;
			FVector2D End;
			int32 PageIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Text;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_Out_Text = { "Out_Text", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms, Out_Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms, Start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms, End), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_Out_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Select Text" },
		{ "Keywords", "pdf, pdfium, read, get, text, string, select, area" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Select_Text", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::PDF_ReaderBPLibrary_eventPDF_Select_Text_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDF_ReaderBPLibrary);
	UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary_NoRegister()
	{
		return UPDF_ReaderBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Image, "PDF_Add_Image" }, // 2129260331
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Pages, "PDF_Add_Pages" }, // 2985996920
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Add_Texts, "PDF_Add_Texts" }, // 2199824553
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper, "PDF_Android_Path_Helper" }, // 4257260276
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D, "PDF_Bytes_To_T2D" }, // 2521646802
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_All_Docs, "PDF_Close_All_Docs" }, // 4174871994
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Close_Font, "PDF_Close_Font" }, // 905038804
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Create_Doc, "PDF_Create_Doc" }, // 454719550
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close, "PDF_File_Close" }, // 1662338953
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open, "PDF_File_Open" }, // 1246137478
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links, "PDF_Get_Links" }, // 1335582646
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages, "PDF_Get_Pages" }, // 3973348522
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count, "PDF_Get_Pages_Count" }, // 2445670591
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts, "PDF_Get_Texts" }, // 2031337193
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose, "PDF_LibClose" }, // 257273354
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit, "PDF_LibInit" }, // 3618929762
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState, "PDF_LibState" }, // 993612849
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Font, "PDF_Load_Font" }, // 2436508662
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Load_Standart_Font, "PDF_Load_Standart_Font" }, // 1961441632
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes, "PDF_Read_Bytes" }, // 3279856659
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path, "PDF_Read_Path" }, // 1815998336
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Save_PDF, "PDF_Save_PDF" }, // 4149975477
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Select_Text, "PDF_Select_Text" }, // 3778016930
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDF_ReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDF_ReaderBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::ClassParams = {
		&UPDF_ReaderBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UPDF_ReaderBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDF_ReaderBPLibrary.OuterSingleton, Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDF_ReaderBPLibrary.OuterSingleton;
	}
	template<> PDF_READER_API UClass* StaticClass<UPDF_ReaderBPLibrary>()
	{
		return UPDF_ReaderBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDF_ReaderBPLibrary);
	UPDF_ReaderBPLibrary::~UPDF_ReaderBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::EnumInfo[] = {
		{ EStandartFonts_StaticEnum, TEXT("EStandartFonts"), &Z_Registration_Info_UEnum_EStandartFonts, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3595226983U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FPdfBytes::StaticStruct, Z_Construct_UScriptStruct_FPdfBytes_Statics::NewStructOps, TEXT("PdfBytes"), &Z_Registration_Info_UScriptStruct_PdfBytes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPdfBytes), 187784250U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArrayObject, UArrayObject::StaticClass, TEXT("UArrayObject"), &Z_Registration_Info_UClass_UArrayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArrayObject), 1126855976U) },
		{ Z_Construct_UClass_UPDFiumDoc, UPDFiumDoc::StaticClass, TEXT("UPDFiumDoc"), &Z_Registration_Info_UClass_UPDFiumDoc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFiumDoc), 2249290787U) },
		{ Z_Construct_UClass_UPDFiumFont, UPDFiumFont::StaticClass, TEXT("UPDFiumFont"), &Z_Registration_Info_UClass_UPDFiumFont, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFiumFont), 1057734852U) },
		{ Z_Construct_UClass_UPDF_ReaderBPLibrary, UPDF_ReaderBPLibrary::StaticClass, TEXT("UPDF_ReaderBPLibrary"), &Z_Registration_Info_UClass_UPDF_ReaderBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDF_ReaderBPLibrary), 680397234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_24182442(TEXT("/Script/PDF_Reader"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
