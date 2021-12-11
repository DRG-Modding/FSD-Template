// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioOptionalModID;
struct FModioModID;
struct FModioOptionalModDependencyList;
struct FModioModDependencyList;
struct FModioOptionalTerms;
struct FModioTerms;
struct FModioOptionalImage;
struct FModioImage;
struct FModioOptionalModProgressInfo;
struct FModioModProgressInfo;
struct FModioOptionalModTagOptions;
struct FModioModTagOptions;
struct FModioOptionalUser;
struct FModioUser;
struct FModioOptionalModInfo;
struct FModioModInfo;
struct FModioOptionalModInfoList;
struct FModioModInfoList;
#ifdef MODIO_ModioOptionalLibrary_generated_h
#error "ModioOptionalLibrary.generated.h already included, missing '#pragma once' in ModioOptionalLibrary.h"
#endif
#define MODIO_ModioOptionalLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModID); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModID); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModDependencyList); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModDependencyList); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalTerms); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalTerms); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalImage); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalImage); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModProgressInfo); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModProgressInfo); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModTagOptions); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModTagOptions); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalUser); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalUser); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModInfo); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModInfo); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModInfoList); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModInfoList);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModID); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModID); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModDependencyList); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModDependencyList); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalTerms); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalTerms); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalImage); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalImage); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModProgressInfo); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModProgressInfo); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModTagOptions); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModTagOptions); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalUser); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalUser); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModInfo); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModInfo); \
	DECLARE_FUNCTION(execGetValue_ModioOptionalModInfoList); \
	DECLARE_FUNCTION(execIsSet_ModioOptionalModInfoList);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioOptionalLibrary(); \
	friend struct Z_Construct_UClass_UModioOptionalLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioOptionalLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioOptionalLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUModioOptionalLibrary(); \
	friend struct Z_Construct_UClass_UModioOptionalLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioOptionalLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioOptionalLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioOptionalLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioOptionalLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioOptionalLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioOptionalLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioOptionalLibrary(UModioOptionalLibrary&&); \
	NO_API UModioOptionalLibrary(const UModioOptionalLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioOptionalLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioOptionalLibrary(UModioOptionalLibrary&&); \
	NO_API UModioOptionalLibrary(const UModioOptionalLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioOptionalLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioOptionalLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioOptionalLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_25_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioOptionalLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioOptionalLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
