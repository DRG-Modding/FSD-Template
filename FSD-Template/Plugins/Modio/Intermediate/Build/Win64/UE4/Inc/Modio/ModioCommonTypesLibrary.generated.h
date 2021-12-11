// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioInitializeOptions;
enum class EModioPortal : uint8;
enum class EModioEnvironment : uint8;
struct FModioEmailAuthCode;
struct FModioEmailAddress;
struct FModioUserID;
struct FModioFileMetadataID;
struct FModioModID;
struct FModioApiKey;
struct FModioAuthenticationParams;
struct FModioGameID;
#ifdef MODIO_ModioCommonTypesLibrary_generated_h
#error "ModioCommonTypesLibrary.generated.h already included, missing '#pragma once' in ModioCommonTypesLibrary.h"
#endif
#define MODIO_ModioCommonTypesLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSessionIdentifier); \
	DECLARE_FUNCTION(execSetPortal); \
	DECLARE_FUNCTION(execMakeInitializeOptions); \
	DECLARE_FUNCTION(execConv_StringToEmailAuthCode); \
	DECLARE_FUNCTION(execConv_StringToEmailAddress); \
	DECLARE_FUNCTION(execConv_EmailAuthCodeToString); \
	DECLARE_FUNCTION(execConv_EmailAddressToString); \
	DECLARE_FUNCTION(execConv_UserIDToString); \
	DECLARE_FUNCTION(execConv_FileMetadataIDToString); \
	DECLARE_FUNCTION(execConv_ModIDToString); \
	DECLARE_FUNCTION(execConv_ApiKeyToString); \
	DECLARE_FUNCTION(execMakeApiKey); \
	DECLARE_FUNCTION(execMakeAuthParams); \
	DECLARE_FUNCTION(execConv_GameIDToString); \
	DECLARE_FUNCTION(execMakeGameId);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSessionIdentifier); \
	DECLARE_FUNCTION(execSetPortal); \
	DECLARE_FUNCTION(execMakeInitializeOptions); \
	DECLARE_FUNCTION(execConv_StringToEmailAuthCode); \
	DECLARE_FUNCTION(execConv_StringToEmailAddress); \
	DECLARE_FUNCTION(execConv_EmailAuthCodeToString); \
	DECLARE_FUNCTION(execConv_EmailAddressToString); \
	DECLARE_FUNCTION(execConv_UserIDToString); \
	DECLARE_FUNCTION(execConv_FileMetadataIDToString); \
	DECLARE_FUNCTION(execConv_ModIDToString); \
	DECLARE_FUNCTION(execConv_ApiKeyToString); \
	DECLARE_FUNCTION(execMakeApiKey); \
	DECLARE_FUNCTION(execMakeAuthParams); \
	DECLARE_FUNCTION(execConv_GameIDToString); \
	DECLARE_FUNCTION(execMakeGameId);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioCommonTypesLibrary(); \
	friend struct Z_Construct_UClass_UModioCommonTypesLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioCommonTypesLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioCommonTypesLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUModioCommonTypesLibrary(); \
	friend struct Z_Construct_UClass_UModioCommonTypesLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioCommonTypesLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioCommonTypesLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioCommonTypesLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioCommonTypesLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioCommonTypesLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioCommonTypesLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioCommonTypesLibrary(UModioCommonTypesLibrary&&); \
	NO_API UModioCommonTypesLibrary(const UModioCommonTypesLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioCommonTypesLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioCommonTypesLibrary(UModioCommonTypesLibrary&&); \
	NO_API UModioCommonTypesLibrary(const UModioCommonTypesLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioCommonTypesLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioCommonTypesLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioCommonTypesLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_21_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioCommonTypesLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioCommonTypesLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
