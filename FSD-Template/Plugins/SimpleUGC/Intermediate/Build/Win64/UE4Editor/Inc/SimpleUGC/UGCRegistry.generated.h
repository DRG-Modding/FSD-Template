// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUGCPackage;
class AActor;
enum class EUGCApprovalStatus : uint8;
class UObject;
enum class EPackageSortField : uint8;
#ifdef SIMPLEUGC_UGCRegistry_generated_h
#error "UGCRegistry.generated.h already included, missing '#pragma once' in UGCRegistry.h"
#endif
#define SIMPLEUGC_UGCRegistry_generated_h

#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_12_DELEGATE \
struct _Script_SimpleUGC_eventUGCRegistryOnPackageMounted_Parms \
{ \
	bool Sandbox; \
}; \
static inline void FUGCRegistryOnPackageMounted_DelegateWrapper(const FMulticastScriptDelegate& UGCRegistryOnPackageMounted, bool Sandbox) \
{ \
	_Script_SimpleUGC_eventUGCRegistryOnPackageMounted_Parms Parms; \
	Parms.Sandbox=Sandbox ? true : false; \
	UGCRegistryOnPackageMounted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_SPARSE_DATA
#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execAreDeprecatedModsInstalled); \
	DECLARE_FUNCTION(execAreModsInstalled); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execGetPackagesSorted); \
	DECLARE_FUNCTION(execGetPackagesWhichDependsOnPackage); \
	DECLARE_FUNCTION(execIsModEnabled); \
	DECLARE_FUNCTION(execIsModInstalled); \
	DECLARE_FUNCTION(execIsModInstalledByIdOrName); \
	DECLARE_FUNCTION(execIsModInstalledImprecise); \
	DECLARE_FUNCTION(execIsModToBeEnabled); \
	DECLARE_FUNCTION(execMountUGCPackage); \
	DECLARE_FUNCTION(execNumberOfModsInstalled); \
	DECLARE_FUNCTION(execRegisterAssetFromPackage); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execResetUGCPackagesManipulatedDuringJoin); \
	DECLARE_FUNCTION(execTryGetPackageFromId); \
	DECLARE_FUNCTION(execUnmountAllNonVerifiedUGCPackages); \
	DECLARE_FUNCTION(execUnmountSandboxUGCPackages); \
	DECLARE_FUNCTION(execUnmountUGCPackage); \
	DECLARE_FUNCTION(execUnmountUGCPackages);


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execAreDeprecatedModsInstalled); \
	DECLARE_FUNCTION(execAreModsInstalled); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execGetPackagesSorted); \
	DECLARE_FUNCTION(execGetPackagesWhichDependsOnPackage); \
	DECLARE_FUNCTION(execIsModEnabled); \
	DECLARE_FUNCTION(execIsModInstalled); \
	DECLARE_FUNCTION(execIsModInstalledByIdOrName); \
	DECLARE_FUNCTION(execIsModInstalledImprecise); \
	DECLARE_FUNCTION(execIsModToBeEnabled); \
	DECLARE_FUNCTION(execMountUGCPackage); \
	DECLARE_FUNCTION(execNumberOfModsInstalled); \
	DECLARE_FUNCTION(execRegisterAssetFromPackage); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execResetUGCPackagesManipulatedDuringJoin); \
	DECLARE_FUNCTION(execTryGetPackageFromId); \
	DECLARE_FUNCTION(execUnmountAllNonVerifiedUGCPackages); \
	DECLARE_FUNCTION(execUnmountSandboxUGCPackages); \
	DECLARE_FUNCTION(execUnmountUGCPackage); \
	DECLARE_FUNCTION(execUnmountUGCPackages);


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct Z_Construct_UClass_UUGCRegistry_Statics; \
public: \
	DECLARE_CLASS(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct Z_Construct_UClass_UUGCRegistry_Statics; \
public: \
	DECLARE_CLASS(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCRegistry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCRegistry(UUGCRegistry&&); \
	NO_API UUGCRegistry(const UUGCRegistry&); \
public:


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCRegistry(UUGCRegistry&&); \
	NO_API UUGCRegistry(const UUGCRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUGCRegistry)


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UGCPackagesInstalledDuringJoin() { return STRUCT_OFFSET(UUGCRegistry, UGCPackagesInstalledDuringJoin); } \
	FORCEINLINE static uint32 __PPO__UGCPackagesUnmountedDuringJoin() { return STRUCT_OFFSET(UUGCRegistry, UGCPackagesUnmountedDuringJoin); }


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_14_PROLOG
#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_SPARSE_DATA \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_RPC_WRAPPERS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_INCLASS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_SPARSE_DATA \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEUGC_API UClass* StaticClass<class UUGCRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
