// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioModInfoList;
struct FModioPagedResult;
struct FModioModInfo;
#ifdef MODIO_ModioModInfoListLibrary_generated_h
#error "ModioModInfoListLibrary.generated.h already included, missing '#pragma once' in ModioModInfoListLibrary.h"
#endif
#define MODIO_ModioModInfoListLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPagedResult); \
	DECLARE_FUNCTION(execGetMods);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPagedResult); \
	DECLARE_FUNCTION(execGetMods);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioModInfoListLibrary(); \
	friend struct Z_Construct_UClass_UModioModInfoListLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioModInfoListLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioModInfoListLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUModioModInfoListLibrary(); \
	friend struct Z_Construct_UClass_UModioModInfoListLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioModInfoListLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioModInfoListLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioModInfoListLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioModInfoListLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioModInfoListLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioModInfoListLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioModInfoListLibrary(UModioModInfoListLibrary&&); \
	NO_API UModioModInfoListLibrary(const UModioModInfoListLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioModInfoListLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioModInfoListLibrary(UModioModInfoListLibrary&&); \
	NO_API UModioModInfoListLibrary(const UModioModInfoListLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioModInfoListLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioModInfoListLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioModInfoListLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_19_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioModInfoListLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModInfoListLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
