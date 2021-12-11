// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordUserDataSDK;
class UDiscordSDKInterface;
#ifdef DISCORDSDK_DiscordSDKInterface_generated_h
#error "DiscordSDKInterface.generated.h already included, missing '#pragma once' in DiscordSDKInterface.h"
#endif
#define DISCORDSDK_DiscordSDKInterface_generated_h

#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_9_DELEGATE \
struct _Script_DiscordSDK_eventDiscordSDKInterfaceOnJoinRequest_Parms \
{ \
	FDiscordUserDataSDK joinRequest; \
}; \
static inline void FDiscordSDKInterfaceOnJoinRequest_DelegateWrapper(const FMulticastScriptDelegate& DiscordSDKInterfaceOnJoinRequest, FDiscordUserDataSDK const& joinRequest) \
{ \
	_Script_DiscordSDK_eventDiscordSDKInterfaceOnJoinRequest_Parms Parms; \
	Parms.joinRequest=joinRequest; \
	DiscordSDKInterfaceOnJoinRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_SPARSE_DATA
#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcceptInvite); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIgnoreInvite); \
	DECLARE_FUNCTION(execRejectInvite);


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcceptInvite); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIgnoreInvite); \
	DECLARE_FUNCTION(execRejectInvite);


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordSDKInterface(); \
	friend struct Z_Construct_UClass_UDiscordSDKInterface_Statics; \
public: \
	DECLARE_CLASS(UDiscordSDKInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordSDK"), NO_API) \
	DECLARE_SERIALIZER(UDiscordSDKInterface)


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordSDKInterface(); \
	friend struct Z_Construct_UClass_UDiscordSDKInterface_Statics; \
public: \
	DECLARE_CLASS(UDiscordSDKInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordSDK"), NO_API) \
	DECLARE_SERIALIZER(UDiscordSDKInterface)


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordSDKInterface(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordSDKInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordSDKInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordSDKInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordSDKInterface(UDiscordSDKInterface&&); \
	NO_API UDiscordSDKInterface(const UDiscordSDKInterface&); \
public:


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordSDKInterface(UDiscordSDKInterface&&); \
	NO_API UDiscordSDKInterface(const UDiscordSDKInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordSDKInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordSDKInterface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordSDKInterface)


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_11_PROLOG
#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_SPARSE_DATA \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_RPC_WRAPPERS \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_INCLASS \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_SPARSE_DATA \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDSDK_API UClass* StaticClass<class UDiscordSDKInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_DiscordSDK_Source_DiscordSDK_Public_DiscordSDKInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
