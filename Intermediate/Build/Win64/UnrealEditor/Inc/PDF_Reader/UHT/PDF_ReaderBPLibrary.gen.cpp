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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UArrayObject();
	PDF_READER_API UClass* Z_Construct_UClass_UArrayObject_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc_NoRegister();
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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Pages(Z_Param_Out_Out_Pages,Z_Param_Out_Out_Pages_Bytes,Z_Param_Out_In_PDF,Z_Param_In_Sampling,Z_Param_bUseMatrix,Z_Param_sRgb,Z_Param_bUseBase64Url);
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
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDF_ReaderBPLibrary::PDF_LibClose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_LibInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDF_ReaderBPLibrary::PDF_LibInit();
		P_NATIVE_END;
	}
	void UPDF_ReaderBPLibrary::StaticRegisterNativesUPDF_ReaderBPLibrary()
	{
		UClass* Class = UPDF_ReaderBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PDF_Android_Path_Helper", &UPDF_ReaderBPLibrary::execPDF_Android_Path_Helper },
			{ "PDF_Bytes_To_T2D", &UPDF_ReaderBPLibrary::execPDF_Bytes_To_T2D },
			{ "PDF_File_Close", &UPDF_ReaderBPLibrary::execPDF_File_Close },
			{ "PDF_File_Open", &UPDF_ReaderBPLibrary::execPDF_File_Open },
			{ "PDF_Get_Links", &UPDF_ReaderBPLibrary::execPDF_Get_Links },
			{ "PDF_Get_Pages", &UPDF_ReaderBPLibrary::execPDF_Get_Pages },
			{ "PDF_Get_Pages_Count", &UPDF_ReaderBPLibrary::execPDF_Get_Pages_Count },
			{ "PDF_Get_Texts", &UPDF_ReaderBPLibrary::execPDF_Get_Texts },
			{ "PDF_LibClose", &UPDF_ReaderBPLibrary::execPDF_LibClose },
			{ "PDF_LibInit", &UPDF_ReaderBPLibrary::execPDF_LibInit },
			{ "PDF_LibState", &UPDF_ReaderBPLibrary::execPDF_LibState },
			{ "PDF_Read_Bytes", &UPDF_ReaderBPLibrary::execPDF_Read_Bytes },
			{ "PDF_Read_Path", &UPDF_ReaderBPLibrary::execPDF_Read_Path },
			{ "PDF_Select_Text", &UPDF_ReaderBPLibrary::execPDF_Select_Text },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "Comment", "/**\n\x09* @param In_Sampling Default (also minimum) value is \"1\" but \"2\" gives best result for A4 sized PDF on 17 inch notebook screen. Bigger values is good for 3D widget like huge UIs.\n\x09* @param bUseMatrix Results will same but it uses different algorithm.\n\x09* @param sRgb Gives more contrast to colors.\n\x09* @param Out_Pages_Bytes Don't use these Base64 results on web. PDFium based Bitmap doesn't work with it.\n\x09*/" },
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_Pages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PDF_ReaderBPLibrary_eventPDF_Get_Pages_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Statics::Function_MetaDataParams)) };
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|System" },
		{ "DisplayName", "PDF Reader - Library Close" },
		{ "Keywords", "pdf, pdfium, library, lib, close" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_LibClose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose_Statics::Function_MetaDataParams)) };
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|System" },
		{ "DisplayName", "PDF Reader - Library Init" },
		{ "Keywords", "pdf, pdfium, library, lib, open" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_LibInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Android_Path_Helper, "PDF_Android_Path_Helper" }, // 4257260276
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Bytes_To_T2D, "PDF_Bytes_To_T2D" }, // 2521646802
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Close, "PDF_File_Close" }, // 1662338953
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_File_Open, "PDF_File_Open" }, // 1246137478
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Links, "PDF_Get_Links" }, // 1335582646
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages, "PDF_Get_Pages" }, // 1222407796
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count, "PDF_Get_Pages_Count" }, // 2445670591
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Texts, "PDF_Get_Texts" }, // 2031337193
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose, "PDF_LibClose" }, // 1188931204
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit, "PDF_LibInit" }, // 2217543227
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState, "PDF_LibState" }, // 993612849
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Bytes, "PDF_Read_Bytes" }, // 3279856659
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path, "PDF_Read_Path" }, // 1815998336
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FPdfBytes::StaticStruct, Z_Construct_UScriptStruct_FPdfBytes_Statics::NewStructOps, TEXT("PdfBytes"), &Z_Registration_Info_UScriptStruct_PdfBytes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPdfBytes), 187784250U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArrayObject, UArrayObject::StaticClass, TEXT("UArrayObject"), &Z_Registration_Info_UClass_UArrayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArrayObject), 1126855976U) },
		{ Z_Construct_UClass_UPDFiumDoc, UPDFiumDoc::StaticClass, TEXT("UPDFiumDoc"), &Z_Registration_Info_UClass_UPDFiumDoc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFiumDoc), 2249290787U) },
		{ Z_Construct_UClass_UPDF_ReaderBPLibrary, UPDF_ReaderBPLibrary::StaticClass, TEXT("UPDF_ReaderBPLibrary"), &Z_Registration_Info_UClass_UPDF_ReaderBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDF_ReaderBPLibrary), 4037235613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_618836802(TEXT("/Script/PDF_Reader"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
