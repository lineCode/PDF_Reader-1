// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PDF_ReaderBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UTexture2D; 
struct FCharStruct;
struct FResponseBytesArray;
#ifdef PDF_READER_PDF_ReaderBPLibrary_generated_h
#error "PDF_ReaderBPLibrary.generated.h already included, missing '#pragma once' in PDF_ReaderBPLibrary.h"
#endif
#define PDF_READER_PDF_ReaderBPLibrary_generated_h

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResponseBytesArray_Statics; \
	PDF_READER_API static class UScriptStruct* StaticStruct();


template<> PDF_READER_API UScriptStruct* StaticStruct<struct FResponseBytesArray>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharStruct_Statics; \
	PDF_READER_API static class UScriptStruct* StaticStruct();


template<> PDF_READER_API UScriptStruct* StaticStruct<struct FCharStruct>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_97_DELEGATE \
struct _Script_PDF_Reader_eventDelegateHttpResponse_Parms \
{ \
	bool bIsSuccessfull; \
	FResponseBytesArray STR_Bytes; \
}; \
static inline void FDelegateHttpResponse_DelegateWrapper(const FScriptDelegate& DelegateHttpResponse, bool bIsSuccessfull, FResponseBytesArray STR_Bytes) \
{ \
	_Script_PDF_Reader_eventDelegateHttpResponse_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.STR_Bytes=STR_Bytes; \
	DelegateHttpResponse.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPDFiumDoc(); \
	friend struct Z_Construct_UClass_UPDFiumDoc_Statics; \
public: \
	DECLARE_CLASS(UPDFiumDoc, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDF_Reader"), NO_API) \
	DECLARE_SERIALIZER(UPDFiumDoc)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUPDFiumDoc(); \
	friend struct Z_Construct_UClass_UPDFiumDoc_Statics; \
public: \
	DECLARE_CLASS(UPDFiumDoc, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDF_Reader"), NO_API) \
	DECLARE_SERIALIZER(UPDFiumDoc)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDFiumDoc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDFiumDoc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDFiumDoc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDFiumDoc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDFiumDoc(UPDFiumDoc&&); \
	NO_API UPDFiumDoc(const UPDFiumDoc&); \
public: \
	NO_API virtual ~UPDFiumDoc();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDFiumDoc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDFiumDoc(UPDFiumDoc&&); \
	NO_API UPDFiumDoc(const UPDFiumDoc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDFiumDoc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDFiumDoc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDFiumDoc) \
	NO_API virtual ~UPDFiumDoc();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_99_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PDF_READER_API UClass* StaticClass<class UPDFiumDoc>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPDF_Get_WebLinks); \
	DECLARE_FUNCTION(execPDF_Get_Chars); \
	DECLARE_FUNCTION(execPDF_Get_Pages_Count); \
	DECLARE_FUNCTION(execPDF_Generate_Texts); \
	DECLARE_FUNCTION(execPDF_Generate_Bitmap); \
	DECLARE_FUNCTION(execPDF_Read_Path); \
	DECLARE_FUNCTION(execPDF_LibState); \
	DECLARE_FUNCTION(execPDF_LibClose); \
	DECLARE_FUNCTION(execPDF_LibInit); \
	DECLARE_FUNCTION(execPDF_Http_Request); \
	DECLARE_FUNCTION(execPDF_Android_Path_Helper);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPDF_Get_WebLinks); \
	DECLARE_FUNCTION(execPDF_Get_Chars); \
	DECLARE_FUNCTION(execPDF_Get_Pages_Count); \
	DECLARE_FUNCTION(execPDF_Generate_Texts); \
	DECLARE_FUNCTION(execPDF_Generate_Bitmap); \
	DECLARE_FUNCTION(execPDF_Read_Path); \
	DECLARE_FUNCTION(execPDF_LibState); \
	DECLARE_FUNCTION(execPDF_LibClose); \
	DECLARE_FUNCTION(execPDF_LibInit); \
	DECLARE_FUNCTION(execPDF_Http_Request); \
	DECLARE_FUNCTION(execPDF_Android_Path_Helper);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPDF_ReaderBPLibrary(); \
	friend struct Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPDF_ReaderBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDF_Reader"), NO_API) \
	DECLARE_SERIALIZER(UPDF_ReaderBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUPDF_ReaderBPLibrary(); \
	friend struct Z_Construct_UClass_UPDF_ReaderBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPDF_ReaderBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDF_Reader"), NO_API) \
	DECLARE_SERIALIZER(UPDF_ReaderBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDF_ReaderBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDF_ReaderBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDF_ReaderBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDF_ReaderBPLibrary(UPDF_ReaderBPLibrary&&); \
	NO_API UPDF_ReaderBPLibrary(const UPDF_ReaderBPLibrary&); \
public: \
	NO_API virtual ~UPDF_ReaderBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDF_ReaderBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDF_ReaderBPLibrary(UPDF_ReaderBPLibrary&&); \
	NO_API UPDF_ReaderBPLibrary(const UPDF_ReaderBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDF_ReaderBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDF_ReaderBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDF_ReaderBPLibrary) \
	NO_API virtual ~UPDF_ReaderBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_109_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h_112_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PDF_ReaderBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PDF_READER_API UClass* StaticClass<class UPDF_ReaderBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_PDF_Reader_Source_PDF_Reader_Public_PDF_ReaderBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
