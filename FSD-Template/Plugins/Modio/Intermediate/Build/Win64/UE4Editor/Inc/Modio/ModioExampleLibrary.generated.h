// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioFilterParams;
enum class EModioLogoSize : uint8;
enum class EModioAvatarSize : uint8;
#ifdef MODIO_ModioExampleLibrary_generated_h
#error "ModioExampleLibrary.generated.h already included, missing '#pragma once' in ModioExampleLibrary.h"
#endif
#define MODIO_ModioExampleLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListUserSubscriptionAsync); \
	DECLARE_FUNCTION(execGetLogoFullSize); \
	DECLARE_FUNCTION(execGetLogoThumbnailSize); \
	DECLARE_FUNCTION(execGetAvatarThumbnailSize);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListUserSubscriptionAsync); \
	DECLARE_FUNCTION(execGetLogoFullSize); \
	DECLARE_FUNCTION(execGetLogoThumbnailSize); \
	DECLARE_FUNCTION(execGetAvatarThumbnailSize);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioExampleLibrary(); \
	friend struct Z_Construct_UClass_UModioExampleLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioExampleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), MODIO_API) \
	DECLARE_SERIALIZER(UModioExampleLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUModioExampleLibrary(); \
	friend struct Z_Construct_UClass_UModioExampleLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioExampleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), MODIO_API) \
	DECLARE_SERIALIZER(UModioExampleLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODIO_API UModioExampleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioExampleLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODIO_API, UModioExampleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioExampleLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODIO_API UModioExampleLibrary(UModioExampleLibrary&&); \
	MODIO_API UModioExampleLibrary(const UModioExampleLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODIO_API UModioExampleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODIO_API UModioExampleLibrary(UModioExampleLibrary&&); \
	MODIO_API UModioExampleLibrary(const UModioExampleLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODIO_API, UModioExampleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioExampleLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioExampleLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_23_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioExampleLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioExampleLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
