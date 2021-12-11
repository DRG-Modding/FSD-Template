// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioFilterParams;
struct FDateTime;
enum class EModioSortFieldType : uint8;
enum class EModioSortDirection : uint8;
struct FModioModID;
#ifdef MODIO_ModioFilterParamsLibrary_generated_h
#error "ModioFilterParamsLibrary.generated.h already included, missing '#pragma once' in ModioFilterParamsLibrary.h"
#endif
#define MODIO_ModioFilterParamsLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMetadataLike); \
	DECLARE_FUNCTION(execPagedResults); \
	DECLARE_FUNCTION(execIndexedResults); \
	DECLARE_FUNCTION(execWithoutTags); \
	DECLARE_FUNCTION(execWithoutTag); \
	DECLARE_FUNCTION(execWithTags); \
	DECLARE_FUNCTION(execWithTag); \
	DECLARE_FUNCTION(execMarkedLiveBefore); \
	DECLARE_FUNCTION(execMarkedLiveAfter); \
	DECLARE_FUNCTION(execNameContainsStrings); \
	DECLARE_FUNCTION(execNameContains); \
	DECLARE_FUNCTION(execSortBy); \
	DECLARE_FUNCTION(execExcludingIDs); \
	DECLARE_FUNCTION(execMatchingIDs);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMetadataLike); \
	DECLARE_FUNCTION(execPagedResults); \
	DECLARE_FUNCTION(execIndexedResults); \
	DECLARE_FUNCTION(execWithoutTags); \
	DECLARE_FUNCTION(execWithoutTag); \
	DECLARE_FUNCTION(execWithTags); \
	DECLARE_FUNCTION(execWithTag); \
	DECLARE_FUNCTION(execMarkedLiveBefore); \
	DECLARE_FUNCTION(execMarkedLiveAfter); \
	DECLARE_FUNCTION(execNameContainsStrings); \
	DECLARE_FUNCTION(execNameContains); \
	DECLARE_FUNCTION(execSortBy); \
	DECLARE_FUNCTION(execExcludingIDs); \
	DECLARE_FUNCTION(execMatchingIDs);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioFilterParamsLibrary(); \
	friend struct Z_Construct_UClass_UModioFilterParamsLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioFilterParamsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioFilterParamsLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUModioFilterParamsLibrary(); \
	friend struct Z_Construct_UClass_UModioFilterParamsLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioFilterParamsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioFilterParamsLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioFilterParamsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioFilterParamsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioFilterParamsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioFilterParamsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioFilterParamsLibrary(UModioFilterParamsLibrary&&); \
	NO_API UModioFilterParamsLibrary(const UModioFilterParamsLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioFilterParamsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioFilterParamsLibrary(UModioFilterParamsLibrary&&); \
	NO_API UModioFilterParamsLibrary(const UModioFilterParamsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioFilterParamsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioFilterParamsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioFilterParamsLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_18_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioFilterParamsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioFilterParamsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
