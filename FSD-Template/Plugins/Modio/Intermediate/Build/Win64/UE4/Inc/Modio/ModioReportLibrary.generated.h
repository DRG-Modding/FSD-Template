// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioModID;
enum class EModioReportType : uint8;
struct FModioReportParams;
struct FModioUserID;
struct FModioGameID;
#ifdef MODIO_ModioReportLibrary_generated_h
#error "ModioReportLibrary.generated.h already included, missing '#pragma once' in ModioReportLibrary.h"
#endif
#define MODIO_ModioReportLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeReportForMod); \
	DECLARE_FUNCTION(execMakeReportForUser); \
	DECLARE_FUNCTION(execMakeReportForGame);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeReportForMod); \
	DECLARE_FUNCTION(execMakeReportForUser); \
	DECLARE_FUNCTION(execMakeReportForGame);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioReportLibrary(); \
	friend struct Z_Construct_UClass_UModioReportLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioReportLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioReportLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUModioReportLibrary(); \
	friend struct Z_Construct_UClass_UModioReportLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioReportLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioReportLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioReportLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioReportLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioReportLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioReportLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioReportLibrary(UModioReportLibrary&&); \
	NO_API UModioReportLibrary(const UModioReportLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioReportLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioReportLibrary(UModioReportLibrary&&); \
	NO_API UModioReportLibrary(const UModioReportLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioReportLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioReportLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioReportLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_27_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioReportLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioReportLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
