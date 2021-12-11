// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioModCollectionEntry;
struct FModioModInfo;
struct FModioModID;
enum class EModioModState : uint8;
#ifdef MODIO_ModioModCollectionLibrary_generated_h
#error "ModioModCollectionLibrary.generated.h already included, missing '#pragma once' in ModioModCollectionLibrary.h"
#endif
#define MODIO_ModioModCollectionLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetModProfile); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetModState);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetModProfile); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetModState);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioModCollectionLibrary(); \
	friend struct Z_Construct_UClass_UModioModCollectionLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioModCollectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioModCollectionLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUModioModCollectionLibrary(); \
	friend struct Z_Construct_UClass_UModioModCollectionLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioModCollectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioModCollectionLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioModCollectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioModCollectionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioModCollectionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioModCollectionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioModCollectionLibrary(UModioModCollectionLibrary&&); \
	NO_API UModioModCollectionLibrary(const UModioModCollectionLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioModCollectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioModCollectionLibrary(UModioModCollectionLibrary&&); \
	NO_API UModioModCollectionLibrary(const UModioModCollectionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioModCollectionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioModCollectionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioModCollectionLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_19_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioModCollectionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioModCollectionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
