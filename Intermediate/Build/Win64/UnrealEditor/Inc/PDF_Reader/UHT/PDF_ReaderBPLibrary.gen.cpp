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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary();
	PDF_READER_API UClass* Z_Construct_UClass_UPDF_ReaderBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PDF_Reader();
// End Cross Module References
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execClosePdfLib)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDF_ReaderBPLibrary::ClosePdfLib();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF_ReaderBPLibrary::execRead_PDF)
	{
		P_GET_TMAP_REF(UTexture2D*,FVector2D,Z_Param_Out_OutPages);
		P_GET_UBOOL(Z_Param_bUseDebug);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
		P_GET_TARRAY(uint8,Z_Param_InBytes);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPDF_Pass);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Sampling);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPDF_ReaderBPLibrary::Read_PDF(Z_Param_Out_OutPages,Z_Param_bUseDebug,Z_Param_InPath,Z_Param_InBytes,Z_Param_InPDF_Pass,Z_Param_Sampling);
		P_NATIVE_END;
	}
	void UPDF_ReaderBPLibrary::StaticRegisterNativesUPDF_ReaderBPLibrary()
	{
		UClass* Class = UPDF_ReaderBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePdfLib", &UPDF_ReaderBPLibrary::execClosePdfLib },
			{ "Read_PDF", &UPDF_ReaderBPLibrary::execRead_PDF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|System" },
		{ "DisplayName", "Close PDF Library" },
		{ "Keywords", "read, pdf" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "ClosePdfLib", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics
	{
		struct PDF_ReaderBPLibrary_eventRead_PDF_Parms
		{
			TMap<UTexture2D*,FVector2D> OutPages;
			bool bUseDebug;
			FString InPath;
			TArray<uint8> InBytes;
			FString InPDF_Pass;
			double Sampling;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPages_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPages_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutPages;
		static void NewProp_bUseDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDebug;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPDF_Pass;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Sampling;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_OutPages_ValueProp = { "OutPages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_OutPages_Key_KeyProp = { "OutPages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_OutPages = { "OutPages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventRead_PDF_Parms, OutPages), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_bUseDebug_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventRead_PDF_Parms*)Obj)->bUseDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_bUseDebug = { "bUseDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventRead_PDF_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_bUseDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventRead_PDF_Parms, InPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventRead_PDF_Parms, InBytes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InPDF_Pass = { "InPDF_Pass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventRead_PDF_Parms, InPDF_Pass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_Sampling = { "Sampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDF_ReaderBPLibrary_eventRead_PDF_Parms, Sampling), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PDF_ReaderBPLibrary_eventRead_PDF_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PDF_ReaderBPLibrary_eventRead_PDF_Parms), &Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_OutPages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_OutPages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_OutPages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_bUseDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_InPDF_Pass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_Sampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF_Reader|Read" },
		{ "Comment", "/**\n\x09* If you want to view a PDF file from online, you need to convert it to byte array (Low Entry HTTP plugin can do that) and attach it to respective input.\n\x09* If you want to view local PDF file, use \"Platform File Name\" instead normalized file name as standart for Unreal Engine. Also you need to attach an \"empty array\" to InBytes.\n\x09* @param InPath Use platform file name in here.\n\x09* @param Sampling Default value is \"1\". It generates textures as its default resolution. But \"2\" gives better result\n\x09*/" },
		{ "CPP_Default_Sampling", "1.000000" },
		{ "DisplayName", "Read PDF" },
		{ "Keywords", "read, pdf" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "If you want to view a PDF file from online, you need to convert it to byte array (Low Entry HTTP plugin can do that) and attach it to respective input.\nIf you want to view local PDF file, use \"Platform File Name\" instead normalized file name as standart for Unreal Engine. Also you need to attach an \"empty array\" to InBytes.\n@param InPath Use platform file name in here.\n@param Sampling Default value is \"1\". It generates textures as its default resolution. But \"2\" gives better result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF_ReaderBPLibrary, nullptr, "Read_PDF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::PDF_ReaderBPLibrary_eventRead_PDF_Parms), Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_ClosePdfLib, "ClosePdfLib" }, // 480386972
		{ &Z_Construct_UFunction_UPDF_ReaderBPLibrary_Read_PDF, "Read_PDF" }, // 2222071162
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n* \n*\x09PDFium Binaries\n*\x09https://github.com/bblanchon/pdfium-binaries/releases\n*/" },
		{ "IncludePath", "PDF_ReaderBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PDF_ReaderBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*\n*      PDFium Binaries\n*      https://github.com/bblanchon/pdfium-binaries/releases" },
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDF_ReaderBPLibrary, UPDF_ReaderBPLibrary::StaticClass, TEXT("UPDF_ReaderBPLibrary"), &Z_Registration_Info_UClass_UPDF_ReaderBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDF_ReaderBPLibrary), 1855904864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_772817171(TEXT("/Script/PDF_Reader"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
