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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UArrayObject();
	PDF_READER_API UClass* Z_Construct_UClass_UArrayObject_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc_NoRegister();
	PDF_READER_API UScriptStruct* Z_Construct_UScriptStruct_FCharStruct();
	UPackage* Z_Construct_UPackage__Script_PDF_Reader();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharStruct;
class UScriptStruct* FCharStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharStruct, Z_Construct_UPackage__Script_PDF_Reader(), TEXT("CharStruct"));
	}
	return Z_Registration_Info_UScriptStruct_CharStruct.OuterSingleton;
}
template<> PDF_READER_API UScriptStruct* StaticStruct<FCharStruct>()
{
	return FCharStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EachChar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EachChar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CharSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09PDFium Binaries\n*\x09https://github.com/bblanchon/pdfium-binaries/releases\n*\x09https://github.com/barteksc/PdfiumAndroid\n*/" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "*      PDFium Binaries\n*      https://github.com/bblanchon/pdfium-binaries/releases\n*      https://github.com/barteksc/PdfiumAndroid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_EachChar_MetaData[] = {
		{ "Category", "CharStruct" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_EachChar = { "EachChar", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharStruct, EachChar), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_EachChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_EachChar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor_MetaData[] = {
		{ "Category", "CharStruct" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor = { "CharColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharStruct, CharColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharPosition_MetaData[] = {
		{ "Category", "CharStruct" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharPosition = { "CharPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharStruct, CharPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharSize_MetaData[] = {
		{ "Category", "CharStruct" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharSize = { "CharSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharStruct, CharSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_EachChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
		nullptr,
		&NewStructOps,
		"CharStruct",
		sizeof(FCharStruct),
		alignof(FCharStruct),
		Z_Construct_UScriptStruct_FCharStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_CharStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharStruct.InnerSingleton, Z_Construct_UScriptStruct_FCharStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharStruct.InnerSingleton;
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
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Generate_Texts)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out_Texts);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Generate_Texts(Z_Param_Out_Out_Texts,Z_Param_Out_In_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Generate_Bitmap)
	{
		P_GET_TMAP_REF(UTexture2D*,FVector2D,Z_Param_Out_Out_Pages);
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Sampling);
		P_GET_UBOOL(Z_Param_bUseMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Generate_Bitmap(Z_Param_Out_Out_Pages,Z_Param_Out_In_PDF,Z_Param_Sampling,Z_Param_bUseMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Read_File_Close)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_In_PDF);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Read_File_Close(Z_Param_Out_In_PDF);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Read_File_Open)
	{
		P_GET_OBJECT_REF(UPDFiumDoc,Z_Param_Out_Out_PDF);
		P_GET_OBJECT_REF(UArrayObject,Z_Param_Out_In_Byte_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Read_File_Open(Z_Param_Out_Out_PDF,Z_Param_Out_In_Byte_Object,Z_Param_In_PDF_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Read_HTTP)
	{
		P_GET_OBJECT_REF(UArrayObject,Z_Param_Out_Out_Byte_Object);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Read_HTTP(Z_Param_Out_Out_Byte_Object,Z_Param_In_Bytes);
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
			{ "PDF_Generate_Bitmap", &UPDF_ReaderBPLibrary::execPDF_Generate_Bitmap },
			{ "PDF_Generate_Texts", &UPDF_ReaderBPLibrary::execPDF_Generate_Texts },
			{ "PDF_Get_Pages_Count", &UPDF_ReaderBPLibrary::execPDF_Get_Pages_Count },
			{ "PDF_LibClose", &UPDF_ReaderBPLibrary::execPDF_LibClose },
			{ "PDF_LibInit", &UPDF_ReaderBPLibrary::execPDF_LibInit },
			{ "PDF_LibState", &UPDF_ReaderBPLibrary::execPDF_LibState },
			{ "PDF_Read_File_Close", &UPDF_ReaderBPLibrary::execPDF_Read_File_Close },
			{ "PDF_Read_File_Open", &UPDF_ReaderBPLibrary::execPDF_Read_File_Open },
			{ "PDF_Read_HTTP", &UPDF_ReaderBPLibrary::execPDF_Read_HTTP },
			{ "PDF_Read_Path", &UPDF_ReaderBPLibrary::execPDF_Read_Path },
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
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms
		{
			TMap<UTexture2D*,FVector2D> Out_Pages;
			UPDFiumDoc* In_PDF;
			double Sampling;
			bool bUseMatrix;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Pages_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Pages_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Out_Pages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_PDF;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Sampling;
		static void NewProp_bUseMatrix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMatrix;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Out_Pages_ValueProp = { "Out_Pages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Out_Pages_Key_KeyProp = { "Out_Pages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Out_Pages = { "Out_Pages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms, Out_Pages), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Sampling = { "Sampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms, Sampling), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_bUseMatrix_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms*)Obj)->bUseMatrix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_bUseMatrix = { "bUseMatrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_bUseMatrix_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Out_Pages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Out_Pages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Out_Pages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_Sampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_bUseMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "Comment", "/**\n\x09* @param Sampling Default value is \"1\". It generates textures as its default resolution. But \"2\" gives better result.\n\x09* @param bUseMatrix Results will same but it uses different function.\n\x09*/" },
		{ "CPP_Default_bUseMatrix", "false" },
		{ "CPP_Default_Sampling", "1.000000" },
		{ "DisplayName", "PDF Reader - Generate Texture2D" },
		{ "Keywords", "pdf, pdfium, read, generate, texture, image" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "@param Sampling Default value is \"1\". It generates textures as its default resolution. But \"2\" gives better result.\n@param bUseMatrix Results will same but it uses different function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Generate_Bitmap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_Out_Texts_Inner = { "Out_Texts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_Out_Texts = { "Out_Texts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms, Out_Texts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_Out_Texts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_Out_Texts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Generate Texts" },
		{ "Keywords", "pdf, pdfium, read, generate, text, string" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Generate_Texts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::FuncParams);
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
		{ "Keywords", "pdf, pdfium, get, page, pages, count" },
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
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Read_File_Close_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::NewProp_In_PDF = { "In_PDF", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_File_Close_Parms, In_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Read_File_Close_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Read_File_Close_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::NewProp_In_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Close File" },
		{ "Keywords", "pdf, pdfium, read, close" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Read_File_Close", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::PDF_ReaderBPLibrary_eventPDF_Read_File_Close_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_Out_PDF = { "Out_PDF", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms, Out_PDF), Z_Construct_UClass_UPDFiumDoc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_In_Byte_Object = { "In_Byte_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms, In_Byte_Object), Z_Construct_UClass_UArrayObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_Out_PDF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_In_Byte_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_In_PDF_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Open File" },
		{ "Keywords", "pdf, pdfium, read, open" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Read_File_Open", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::PDF_ReaderBPLibrary_eventPDF_Read_File_Open_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Read_HTTP_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_Out_Byte_Object = { "Out_Byte_Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_HTTP_Parms, Out_Byte_Object), Z_Construct_UClass_UArrayObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_HTTP_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Read_HTTP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Read_HTTP_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_Out_Byte_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "DisplayName", "PDF Reader - Read from HTTP" },
		{ "Keywords", "pdf, pdfium, read, load, path" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Read_HTTP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::PDF_ReaderBPLibrary_eventPDF_Read_HTTP_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap, "PDF_Generate_Bitmap" }, // 1572680557
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts, "PDF_Generate_Texts" }, // 3951875835
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count, "PDF_Get_Pages_Count" }, // 3165866585
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose, "PDF_LibClose" }, // 1188931204
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit, "PDF_LibInit" }, // 2217543227
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState, "PDF_LibState" }, // 993612849
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Close, "PDF_Read_File_Close" }, // 427030448
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_File_Open, "PDF_Read_File_Open" }, // 3519979607
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_HTTP, "PDF_Read_HTTP" }, // 4163099924
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path, "PDF_Read_Path" }, // 1815998336
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
		{ FCharStruct::StaticStruct, Z_Construct_UScriptStruct_FCharStruct_Statics::NewStructOps, TEXT("CharStruct"), &Z_Registration_Info_UScriptStruct_CharStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharStruct), 1988918335U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArrayObject, UArrayObject::StaticClass, TEXT("UArrayObject"), &Z_Registration_Info_UClass_UArrayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArrayObject), 1126855976U) },
		{ Z_Construct_UClass_UPDFiumDoc, UPDFiumDoc::StaticClass, TEXT("UPDFiumDoc"), &Z_Registration_Info_UClass_UPDFiumDoc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFiumDoc), 2249290787U) },
		{ Z_Construct_UClass_UPDF_ReaderBPLibrary, UPDF_ReaderBPLibrary::StaticClass, TEXT("UPDF_ReaderBPLibrary"), &Z_Registration_Info_UClass_UPDF_ReaderBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDF_ReaderBPLibrary), 1489584801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_1285892277(TEXT("/Script/PDF_Reader"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
