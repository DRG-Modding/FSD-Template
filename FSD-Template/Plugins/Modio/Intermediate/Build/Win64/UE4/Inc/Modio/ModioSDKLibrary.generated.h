// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioInitializeOptions;
enum class EModioEnvironment : uint8;
struct FModioApiKey;
struct FModioGameID;
#ifdef MODIO_ModioSDKLibrary_generated_h
#error "ModioSDKLibrary.generated.h already included, missing '#pragma once' in ModioSDKLibrary.h"
#endif
#define MODIO_ModioSDKLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPct_Int64Int64); \
	DECLARE_FUNCTION(execConv_Int64ToText); \
	DECLARE_FUNCTION(execConv_Int64ToString); \
	DECLARE_FUNCTION(execFilesize_ToString); \
	DECLARE_FUNCTION(execIsValidSecurityCodeFormat); \
	DECLARE_FUNCTION(execIsValidEmailAddressFormat); \
	DECLARE_FUNCTION(execGetProjectInitializeOptions); \
	DECLARE_FUNCTION(execGetProjectEnvironment); \
	DECLARE_FUNCTION(execGetProjectApiKey); \
	DECLARE_FUNCTION(execGetProjectGameId);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPct_Int64Int64); \
	DECLARE_FUNCTION(execConv_Int64ToText); \
	DECLARE_FUNCTION(execConv_Int64ToString); \
	DECLARE_FUNCTION(execFilesize_ToString); \
	DECLARE_FUNCTION(execIsValidSecurityCodeFormat); \
	DECLARE_FUNCTION(execIsValidEmailAddressFormat); \
	DECLARE_FUNCTION(execGetProjectInitializeOptions); \
	DECLARE_FUNCTION(execGetProjectEnvironment); \
	DECLARE_FUNCTION(execGetProjectApiKey); \
	DECLARE_FUNCTION(execGetProjectGameId);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioSDKLibrary(); \
	friend struct Z_Construct_UClass_UModioSDKLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioSDKLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), MODIO_API) \
	DECLARE_SERIALIZER(UModioSDKLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUModioSDKLibrary(); \
	friend struct Z_Construct_UClass_UModioSDKLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioSDKLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), MODIO_API) \
	DECLARE_SERIALIZER(UModioSDKLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODIO_API UModioSDKLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioSDKLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODIO_API, UModioSDKLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioSDKLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODIO_API UModioSDKLibrary(UModioSDKLibrary&&); \
	MODIO_API UModioSDKLibrary(const UModioSDKLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODIO_API UModioSDKLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODIO_API UModioSDKLibrary(UModioSDKLibrary&&); \
	MODIO_API UModioSDKLibrary(const UModioSDKLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODIO_API, UModioSDKLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioSDKLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioSDKLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_30_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioSDKLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioSDKLibrary_h


#define FOREACH_ENUM_EFILESIZEUNIT(op) \
	op(Largest) \
	op(B) \
	op(KB) \
	op(MB) \
	op(GB) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
