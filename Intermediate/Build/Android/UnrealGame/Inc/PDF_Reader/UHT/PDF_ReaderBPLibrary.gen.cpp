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
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc();
	PDF_READER_API UClass* Z_Construct_UClass_UPDFiumDoc_NoRegister();
	PDF_READER_API UFunction* Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature();
	PDF_READER_API UScriptStruct* Z_Construct_UScriptStruct_FCharStruct();
	PDF_READER_API UScriptStruct* Z_Construct_UScriptStruct_FResponseBytesArray();
	UPackage* Z_Construct_UPackage__Script_PDF_Reader();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResponseBytesArray;
class UScriptStruct* FResponseBytesArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResponseBytesArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResponseBytesArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponseBytesArray, Z_Construct_UPackage__Script_PDF_Reader(), TEXT("ResponseBytesArray"));
	}
	return Z_Registration_Info_UScriptStruct_ResponseBytesArray.OuterSingleton;
}
template<> PDF_READER_API UScriptStruct* StaticStruct<FResponseBytesArray>()
{
	return FResponseBytesArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResponseBytesArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseBytesArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n* \n*\x09PDFium Binaries\n*\x09https://github.com/bblanchon/pdfium-binaries/releases\n*/" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*\n*      PDFium Binaries\n*      https://github.com/bblanchon/pdfium-binaries/releases" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponseBytesArray>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array_Inner = { "Bytes_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array_MetaData[] = {
		{ "Category", "ResponseBytesArray" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array = { "Bytes_Array", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResponseBytesArray, Bytes_Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponseBytesArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewProp_Bytes_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponseBytesArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PDF_Reader,
		nullptr,
		&NewStructOps,
		"ResponseBytesArray",
		sizeof(FResponseBytesArray),
		alignof(FResponseBytesArray),
		Z_Construct_UScriptStruct_FResponseBytesArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseBytesArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseBytesArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseBytesArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponseBytesArray()
	{
		if (!Z_Registration_Info_UScriptStruct_ResponseBytesArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResponseBytesArray.InnerSingleton, Z_Construct_UScriptStruct_FResponseBytesArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResponseBytesArray.InnerSingleton;
	}
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
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor = { "CharColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharStruct, CharColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharStruct_Statics::NewProp_CharColor_MetaData)) };
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
	struct Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics
	{
		struct _Script_PDF_Reader_eventDelegateHttpResponse_Parms
		{
			bool bIsSuccessfull;
			FResponseBytesArray STR_Bytes;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FStructPropertyParams NewProp_STR_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_PDF_Reader_eventDelegateHttpResponse_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PDF_Reader_eventDelegateHttpResponse_Parms), &Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::NewProp_STR_Bytes = { "STR_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PDF_Reader_eventDelegateHttpResponse_Parms, STR_Bytes), Z_Construct_UScriptStruct_FResponseBytesArray, METADATA_PARAMS(nullptr, 0) }; // 4183860899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::NewProp_STR_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PDF_Reader, nullptr, "DelegateHttpResponse__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::_Script_PDF_Reader_eventDelegateHttpResponse_Parms), Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_WebLinks)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out_Links);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_TMAP(int32,FString,Z_Param_AdditionalUnicodes);
		P_GET_UBOOL(Z_Param_bAddAdditionalUnicodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_WebLinks(Z_Param_Out_Out_Links,Z_Param_In_Bytes,Z_Param_In_PDF_Password,Z_Param_PageIndex,Z_Param_AdditionalUnicodes,Z_Param_bAddAdditionalUnicodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_Chars)
	{
		P_GET_TARRAY_REF(FCharStruct,Z_Param_Out_Out_Chars);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_GET_TMAP(int32,FString,Z_Param_AdditionalUnicodes);
		P_GET_UBOOL(Z_Param_bAddAdditionalUnicodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Chars(Z_Param_Out_Out_Chars,Z_Param_In_Bytes,Z_Param_In_PDF_Password,Z_Param_PageIndex,Z_Param_AdditionalUnicodes,Z_Param_bAddAdditionalUnicodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Get_Pages_Count)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PagesCount);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Get_Pages_Count(Z_Param_Out_PagesCount,Z_Param_In_Bytes,Z_Param_In_PDF_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Generate_Texts)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out_Texts);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_GET_TMAP(int32,FString,Z_Param_AdditionalUnicodes);
		P_GET_UBOOL(Z_Param_bAddAdditionalUnicodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Generate_Texts(Z_Param_Out_Out_Texts,Z_Param_In_Bytes,Z_Param_In_PDF_Password,Z_Param_AdditionalUnicodes,Z_Param_bAddAdditionalUnicodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Generate_Bitmap)
	{
		P_GET_TMAP_REF(UTexture2D*,FVector2D,Z_Param_Out_Out_Pages);
		P_GET_TARRAY(uint8,Z_Param_In_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_PDF_Password);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Sampling);
		P_GET_UBOOL(Z_Param_bUseMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Generate_Bitmap(Z_Param_Out_Out_Pages,Z_Param_In_Bytes,Z_Param_In_PDF_Password,Z_Param_Sampling,Z_Param_bUseMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Read_Path)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Out_Bytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::PDF_Read_Path(Z_Param_Out_Out_Bytes,Z_Param_In_Path);
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
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execPDF_Http_Request)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateHttpResponse);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDF_ReaderBPLibrary::PDF_Http_Request(FDelegateHttpResponse(Z_Param_DelegateHttpResponse),Z_Param_In_URL);
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
	void UPDF_ReaderBPLibrary::StaticRegisterNativesUPDF_ReaderBPLibrary()
	{
		UClass* Class = UPDF_ReaderBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PDF_Android_Path_Helper", &UPDF_ReaderBPLibrary::execPDF_Android_Path_Helper },
			{ "PDF_Generate_Bitmap", &UPDF_ReaderBPLibrary::execPDF_Generate_Bitmap },
			{ "PDF_Generate_Texts", &UPDF_ReaderBPLibrary::execPDF_Generate_Texts },
			{ "PDF_Get_Chars", &UPDF_ReaderBPLibrary::execPDF_Get_Chars },
			{ "PDF_Get_Pages_Count", &UPDF_ReaderBPLibrary::execPDF_Get_Pages_Count },
			{ "PDF_Get_WebLinks", &UPDF_ReaderBPLibrary::execPDF_Get_WebLinks },
			{ "PDF_Http_Request", &UPDF_ReaderBPLibrary::execPDF_Http_Request },
			{ "PDF_LibClose", &UPDF_ReaderBPLibrary::execPDF_LibClose },
			{ "PDF_LibInit", &UPDF_ReaderBPLibrary::execPDF_LibInit },
			{ "PDF_LibState", &UPDF_ReaderBPLibrary::execPDF_LibState },
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
			TArray<uint8> In_Bytes;
			FString In_PDF_Password;
			double Sampling;
			bool bUseMatrix;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Pages_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Pages_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_Out_Pages;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_PDF_Password;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Bitmap_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap_Statics::NewProp_In_PDF_Password,
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
			TArray<uint8> In_Bytes;
			FString In_PDF_Password;
			TMap<int32,FString> AdditionalUnicodes;
			bool bAddAdditionalUnicodes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Texts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Texts;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_PDF_Password;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalUnicodes_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalUnicodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalUnicodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalUnicodes;
		static void NewProp_bAddAdditionalUnicodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddAdditionalUnicodes;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_ValueProp = { "AdditionalUnicodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_Key_KeyProp = { "AdditionalUnicodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes = { "AdditionalUnicodes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms, AdditionalUnicodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_MetaData)) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_bAddAdditionalUnicodes_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms*)Obj)->bAddAdditionalUnicodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_bAddAdditionalUnicodes = { "bAddAdditionalUnicodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_bAddAdditionalUnicodes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Generate_Texts_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_Out_Texts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_Out_Texts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_In_PDF_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_AdditionalUnicodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_bAddAdditionalUnicodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "CPP_Default_bAddAdditionalUnicodes", "false" },
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
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms
		{
			TArray<FCharStruct> Out_Chars;
			TArray<uint8> In_Bytes;
			FString In_PDF_Password;
			int32 PageIndex;
			TMap<int32,FString> AdditionalUnicodes;
			bool bAddAdditionalUnicodes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Chars_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Chars;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_PDF_Password;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalUnicodes_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalUnicodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalUnicodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalUnicodes;
		static void NewProp_bAddAdditionalUnicodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddAdditionalUnicodes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_Out_Chars_Inner = { "Out_Chars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCharStruct, METADATA_PARAMS(nullptr, 0) }; // 405436335
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_Out_Chars = { "Out_Chars", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms, Out_Chars), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 405436335
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_ValueProp = { "AdditionalUnicodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_Key_KeyProp = { "AdditionalUnicodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes = { "AdditionalUnicodes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms, AdditionalUnicodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_MetaData)) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_bAddAdditionalUnicodes_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms*)Obj)->bAddAdditionalUnicodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_bAddAdditionalUnicodes = { "bAddAdditionalUnicodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_bAddAdditionalUnicodes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_Out_Chars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_Out_Chars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_In_PDF_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_AdditionalUnicodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_bAddAdditionalUnicodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "CPP_Default_bAddAdditionalUnicodes", "false" },
		{ "DisplayName", "PDF Reader - Get Chars" },
		{ "Keywords", "pdf, pdfium, read, generate, text, string, get, chars" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_Chars", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::PDF_ReaderBPLibrary_eventPDF_Get_Chars_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms
		{
			int32 PagesCount;
			TArray<uint8> In_Bytes;
			FString In_PDF_Password;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PagesCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_PDF_Password;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_PagesCount = { "PagesCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms, PagesCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_Pages_Count_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_PagesCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count_Statics::NewProp_In_PDF_Password,
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
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms
		{
			TArray<FString> Out_Links;
			TArray<uint8> In_Bytes;
			FString In_PDF_Password;
			int32 PageIndex;
			TMap<int32,FString> AdditionalUnicodes;
			bool bAddAdditionalUnicodes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Links_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Links;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_PDF_Password;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalUnicodes_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalUnicodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalUnicodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalUnicodes;
		static void NewProp_bAddAdditionalUnicodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddAdditionalUnicodes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_Out_Links_Inner = { "Out_Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_Out_Links = { "Out_Links", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms, Out_Links), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_In_Bytes_Inner = { "In_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_In_Bytes = { "In_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms, In_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_In_PDF_Password = { "In_PDF_Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms, In_PDF_Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_ValueProp = { "AdditionalUnicodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_Key_KeyProp = { "AdditionalUnicodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes = { "AdditionalUnicodes", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms, AdditionalUnicodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_MetaData)) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_bAddAdditionalUnicodes_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms*)Obj)->bAddAdditionalUnicodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_bAddAdditionalUnicodes = { "bAddAdditionalUnicodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_bAddAdditionalUnicodes_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_Out_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_Out_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_In_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_In_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_In_PDF_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_PageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_AdditionalUnicodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_bAddAdditionalUnicodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "CPP_Default_bAddAdditionalUnicodes", "false" },
		{ "DisplayName", "PDF Reader - Get Web Links" },
		{ "Keywords", "pdf, pdfium, read, generate, text, string, get, chars" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Get_WebLinks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::PDF_ReaderBPLibrary_eventPDF_Get_WebLinks_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Http_Request_Parms
		{
			FScriptDelegate DelegateHttpResponse;
			FString In_URL;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateHttpResponse;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::NewProp_DelegateHttpResponse = { "DelegateHttpResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Http_Request_Parms, DelegateHttpResponse), Z_Construct_UDelegateFunction_PDF_Reader_DelegateHttpResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1020083411
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::NewProp_In_URL = { "In_URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Http_Request_Parms, In_URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::NewProp_DelegateHttpResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::NewProp_In_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read|Helpers" },
		{ "DisplayName", "PDF Reader - HTTP Request" },
		{ "Keywords", "pdf, pdfium, library, http, get, web, url" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "PDF_Http_Request", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::PDF_ReaderBPLibrary_eventPDF_Http_Request_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics
	{
		struct PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms
		{
			TArray<uint8> Out_Bytes;
			FString In_Path;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Out_Bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Out_Bytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_Out_Bytes_Inner = { "Out_Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_Out_Bytes = { "Out_Bytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms, Out_Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_In_Path = { "In_Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms, In_Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventPDF_Read_Path_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_Out_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_Out_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_In_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "Comment", "/**\n\x09* @param In_Path You need to use absolute platform path. You can use \"PDF Reader - Mobile Path Helper\" to generate it for mobile. \n\x09*/" },
		{ "DisplayName", "PDF Reader - Read from Path" },
		{ "Keywords", "pdf, pdfium, read, load, path" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "@param In_Path You need to use absolute platform path. You can use \"PDF Reader - Mobile Path Helper\" to generate it for mobile." },
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
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Bitmap, "PDF_Generate_Bitmap" }, // 2336965778
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Generate_Texts, "PDF_Generate_Texts" }, // 2602646860
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Chars, "PDF_Get_Chars" }, // 2238817535
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_Pages_Count, "PDF_Get_Pages_Count" }, // 177618879
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Get_WebLinks, "PDF_Get_WebLinks" }, // 2846245319
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Http_Request, "PDF_Http_Request" }, // 678248636
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibClose, "PDF_LibClose" }, // 1188931204
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibInit, "PDF_LibInit" }, // 2217543227
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_LibState, "PDF_LibState" }, // 993612849
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_PDF_Read_Path, "PDF_Read_Path" }, // 2830278650
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
		{ FResponseBytesArray::StaticStruct, Z_Construct_UScriptStruct_FResponseBytesArray_Statics::NewStructOps, TEXT("ResponseBytesArray"), &Z_Registration_Info_UScriptStruct_ResponseBytesArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResponseBytesArray), 4183860899U) },
		{ FCharStruct::StaticStruct, Z_Construct_UScriptStruct_FCharStruct_Statics::NewStructOps, TEXT("CharStruct"), &Z_Registration_Info_UScriptStruct_CharStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharStruct), 405436335U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDFiumDoc, UPDFiumDoc::StaticClass, TEXT("UPDFiumDoc"), &Z_Registration_Info_UClass_UPDFiumDoc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFiumDoc), 2249290787U) },
		{ Z_Construct_UClass_UPDF_ReaderBPLibrary, UPDF_ReaderBPLibrary::StaticClass, TEXT("UPDF_ReaderBPLibrary"), &Z_Registration_Info_UClass_UPDF_ReaderBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDF_ReaderBPLibrary), 2533021203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_3116488346(TEXT("/Script/PDF_Reader"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
