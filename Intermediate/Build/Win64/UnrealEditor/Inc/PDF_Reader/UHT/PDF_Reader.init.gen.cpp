// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDF_Reader_init() {}
	PDF_READER_API UFunction* Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PDF_Reader;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PDF_Reader()
	{
		if (!Z_Registration_Info_UPackage__Script_PDF_Reader.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PDF_Reader_DelegateAddObject__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PDF_Reader",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAB3692CC,
				0x3442C79C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PDF_Reader.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PDF_Reader.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PDF_Reader(Z_Construct_UPackage__Script_PDF_Reader, TEXT("/Script/PDF_Reader"), Z_Registration_Info_UPackage__Script_PDF_Reader, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAB3692CC, 0x3442C79C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
