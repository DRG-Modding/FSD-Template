// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModioPopupBase;
#ifdef MODIO_ModioPopupContainer_generated_h
#error "ModioPopupContainer.generated.h already included, missing '#pragma once' in ModioPopupContainer.h"
#endif
#define MODIO_ModioPopupContainer_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_RPC_WRAPPERS \
	virtual UModioPopupBase* PushPopup_Implementation(TSubclassOf<UModioPopupBase>  PopupClass); \
 \
	DECLARE_FUNCTION(execPopPopup); \
	DECLARE_FUNCTION(execPushPopup);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UModioPopupBase* PushPopup_Implementation(TSubclassOf<UModioPopupBase>  PopupClass); \
 \
	DECLARE_FUNCTION(execPopPopup); \
	DECLARE_FUNCTION(execPushPopup);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_EVENT_PARMS \
	struct ModioPopupContainer_eventPushPopup_Parms \
	{ \
		TSubclassOf<UModioPopupBase>  PopupClass; \
		UModioPopupBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ModioPopupContainer_eventPushPopup_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_CALLBACK_WRAPPERS
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioPopupContainer(); \
	friend struct Z_Construct_UClass_UModioPopupContainer_Statics; \
public: \
	DECLARE_CLASS(UModioPopupContainer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioPopupContainer)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUModioPopupContainer(); \
	friend struct Z_Construct_UClass_UModioPopupContainer_Statics; \
public: \
	DECLARE_CLASS(UModioPopupContainer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), NO_API) \
	DECLARE_SERIALIZER(UModioPopupContainer)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModioPopupContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioPopupContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioPopupContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioPopupContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioPopupContainer(UModioPopupContainer&&); \
	NO_API UModioPopupContainer(const UModioPopupContainer&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModioPopupContainer(UModioPopupContainer&&); \
	NO_API UModioPopupContainer(const UModioPopupContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModioPopupContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioPopupContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioPopupContainer)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PopupStack() { return STRUCT_OFFSET(UModioPopupContainer, PopupStack); } \
	FORCEINLINE static uint32 __PPO__PopupCache() { return STRUCT_OFFSET(UModioPopupContainer, PopupCache); }


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_23_PROLOG \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_EVENT_PARMS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_CALLBACK_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_CALLBACK_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioPopupContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_UI_ModioPopupContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
