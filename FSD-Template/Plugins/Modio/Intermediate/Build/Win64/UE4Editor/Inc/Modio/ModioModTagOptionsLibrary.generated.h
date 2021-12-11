// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioModTagOptions;
struct FModioPagedResult;
struct FModioModTagInfo;
#ifdef MODIO_ModioModTagOptionsLibrary_generated_h
#error "ModioModTagOptionsLibrary.generated.h already included, missing '#pragma once' in ModioModTagOptionsLibrary.h"
#endif
#define MODIO_ModioModTagOptionsLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPagedResult); \
	DECLARE_FUNCTION(execGetTags);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPagedResult); \
	DECLARE_FUNCTION(execGetTags);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioModTagOptionsLibrary(); \
	friend struct Z_Construct_UClass_UModioModTagOptionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioModTagOptionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioModTagOptionsLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUModioModTagOptionsLibrary(); \
	friend struct Z_Construct_UClass_UModioModTagOptionsLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioModTagOptionsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioModTagOptionsLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioModTagOptionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioModTagOptionsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioModTagOptionsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioModTagOptionsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioModTagOptionsLibrary(UModioModTagOptionsLibrary&&); \
	NO_API UModioModTagOptionsLibrary(const UModioModTagOptionsLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioModTagOptionsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioModTagOptionsLibrary(UModioModTagOptionsLibrary&&); \
	NO_API UModioModTagOptionsLibrary(const UModioModTagOptionsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioModTagOptionsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioModTagOptionsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioModTagOptionsLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_19_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioModTagOptionsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModTagOptionsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
