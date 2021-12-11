// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2DDynamic;
class UTexture;
enum class EModioGallerySize : uint8;
struct FVector2D;
enum class EModioAvatarSize : uint8;
enum class EModioLogoSize : uint8;
struct FModioImage;
enum class EModioImageState : uint8;
#ifdef MODIO_ModioImageLibrary_generated_h
#error "ModioImageLibrary.generated.h already included, missing '#pragma once' in ModioImageLibrary.h"
#endif
#define MODIO_ModioImageLibrary_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_20_DELEGATE \
struct _Script_Modio_eventOnLoadImageDelegate_Parms \
{ \
	UTexture2DDynamic* Texture; \
}; \
static inline void FOnLoadImageDelegate_DelegateWrapper(const FScriptDelegate& OnLoadImageDelegate, UTexture2DDynamic* Texture) \
{ \
	_Script_Modio_eventOnLoadImageDelegate_Parms Parms; \
	Parms.Texture=Texture; \
	OnLoadImageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGallerySize); \
	DECLARE_FUNCTION(execGetAvatarSize); \
	DECLARE_FUNCTION(execGetLogoSize); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execLoadAsync); \
	DECLARE_FUNCTION(execGetTexture);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGallerySize); \
	DECLARE_FUNCTION(execGetAvatarSize); \
	DECLARE_FUNCTION(execGetLogoSize); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execLoadAsync); \
	DECLARE_FUNCTION(execGetTexture);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioImageLibrary(); \
	friend struct Z_Construct_UClass_UModioImageLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioImageLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioImageLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUModioImageLibrary(); \
	friend struct Z_Construct_UClass_UModioImageLibrary_Statics; \
public: \
	DECLARE_CLASS(UModioImageLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioImageLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioImageLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioImageLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioImageLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioImageLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioImageLibrary(UModioImageLibrary&&); \
	NO_API UModioImageLibrary(const UModioImageLibrary&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioImageLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioImageLibrary(UModioImageLibrary&&); \
	NO_API UModioImageLibrary(const UModioImageLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioImageLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioImageLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioImageLibrary)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_22_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioImageLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_Libraries_ModioImageLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
