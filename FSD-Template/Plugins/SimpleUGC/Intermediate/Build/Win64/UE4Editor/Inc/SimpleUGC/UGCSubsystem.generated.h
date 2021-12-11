// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUGCPackageError : uint8;
enum class EModioRequestType : uint8;
class UUGCPackage;
class UObject;
struct FLatentActionInfo;
class UModioModInfoWrapper;
class UTexture2DDynamic;
class UModioTermsWrapper;
#ifdef SIMPLEUGC_UGCSubsystem_generated_h
#error "UGCSubsystem.generated.h already included, missing '#pragma once' in UGCSubsystem.h"
#endif
#define SIMPLEUGC_UGCSubsystem_generated_h

#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_23_DELEGATE \
struct _Script_SimpleUGC_eventUGCSubsystemOnModUninstallProgressFinished_Parms \
{ \
	FString ModName; \
	FString ModId; \
}; \
static inline void FUGCSubsystemOnModUninstallProgressFinished_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnModUninstallProgressFinished, const FString& ModName, const FString& ModId) \
{ \
	_Script_SimpleUGC_eventUGCSubsystemOnModUninstallProgressFinished_Parms Parms; \
	Parms.ModName=ModName; \
	Parms.ModId=ModId; \
	UGCSubsystemOnModUninstallProgressFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_22_DELEGATE \
struct _Script_SimpleUGC_eventUGCSubsystemOnModDownloadExtractProgress_Parms \
{ \
	FString Name; \
	TArray<FString> ModsPendingDownload; \
	bool Downloading; \
	int32 Progress; \
	int32 Total; \
}; \
static inline void FUGCSubsystemOnModDownloadExtractProgress_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnModDownloadExtractProgress, const FString& Name, TArray<FString> const& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total) \
{ \
	_Script_SimpleUGC_eventUGCSubsystemOnModDownloadExtractProgress_Parms Parms; \
	Parms.Name=Name; \
	Parms.ModsPendingDownload=ModsPendingDownload; \
	Parms.Downloading=Downloading ? true : false; \
	Parms.Progress=Progress; \
	Parms.Total=Total; \
	UGCSubsystemOnModDownloadExtractProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_21_DELEGATE \
struct _Script_SimpleUGC_eventUGCSubsystemOnErrorInstalling_Parms \
{ \
	FString ModName; \
	EUGCPackageError ErrorType; \
}; \
static inline void FUGCSubsystemOnErrorInstalling_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnErrorInstalling, const FString& ModName, EUGCPackageError ErrorType) \
{ \
	_Script_SimpleUGC_eventUGCSubsystemOnErrorInstalling_Parms Parms; \
	Parms.ModName=ModName; \
	Parms.ErrorType=ErrorType; \
	UGCSubsystemOnErrorInstalling.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_20_DELEGATE \
static inline void FUGCSubsystemOnLocalUserModsInstalled_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnLocalUserModsInstalled) \
{ \
	UGCSubsystemOnLocalUserModsInstalled.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_19_DELEGATE \
struct _Script_SimpleUGC_eventUGCSubsystemOnModioUserAuthenticated_Parms \
{ \
	bool Authenticated; \
}; \
static inline void FUGCSubsystemOnModioUserAuthenticated_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnModioUserAuthenticated, bool Authenticated) \
{ \
	_Script_SimpleUGC_eventUGCSubsystemOnModioUserAuthenticated_Parms Parms; \
	Parms.Authenticated=Authenticated ? true : false; \
	UGCSubsystemOnModioUserAuthenticated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_18_DELEGATE \
struct _Script_SimpleUGC_eventUGCSubsystemOnModDownloadExtractProgressFinished_Parms \
{ \
	FString ModName; \
	FString ModId; \
}; \
static inline void FUGCSubsystemOnModDownloadExtractProgressFinished_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnModDownloadExtractProgressFinished, const FString& ModName, const FString& ModId) \
{ \
	_Script_SimpleUGC_eventUGCSubsystemOnModDownloadExtractProgressFinished_Parms Parms; \
	Parms.ModName=ModName; \
	Parms.ModId=ModId; \
	UGCSubsystemOnModDownloadExtractProgressFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_17_DELEGATE \
struct _Script_SimpleUGC_eventUGCSubsystemOnModManagementStateChanged_Parms \
{ \
	bool Enabled; \
}; \
static inline void FUGCSubsystemOnModManagementStateChanged_DelegateWrapper(const FMulticastScriptDelegate& UGCSubsystemOnModManagementStateChanged, bool Enabled) \
{ \
	_Script_SimpleUGC_eventUGCSubsystemOnModManagementStateChanged_Parms Parms; \
	Parms.Enabled=Enabled ? true : false; \
	UGCSubsystemOnModManagementStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_SPARSE_DATA
#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyPendingMods); \
	DECLARE_FUNCTION(execDisableModioModManagement); \
	DECLARE_FUNCTION(execEnableModioModManagement); \
	DECLARE_FUNCTION(execGetCheckGameVersion); \
	DECLARE_FUNCTION(execGetNamesOfModsPendingInstall); \
	DECLARE_FUNCTION(execGetNamesOfModsPendingUninstall); \
	DECLARE_FUNCTION(execHasOutstadingRequestOfType); \
	DECLARE_FUNCTION(execIsModPendingUninstall); \
	DECLARE_FUNCTION(execK2_RequestAuthentication); \
	DECLARE_FUNCTION(execK2_RequestFetchModUpdates); \
	DECLARE_FUNCTION(execK2_RequestHasHostHiddenMods); \
	DECLARE_FUNCTION(execK2_RequestModDependencyList); \
	DECLARE_FUNCTION(execK2_RequestModMetaData); \
	DECLARE_FUNCTION(execK2_RequestModThumbnail); \
	DECLARE_FUNCTION(execK2_RequestModThumbnailById); \
	DECLARE_FUNCTION(execK2_RequestSubscribe); \
	DECLARE_FUNCTION(execK2_RequestTermsOfUse); \
	DECLARE_FUNCTION(execMarkRecentlyInstalledModsSuccesful); \
	DECLARE_FUNCTION(execRemoveRequestOfType); \
	DECLARE_FUNCTION(execSetCheckGameVersion); \
	DECLARE_FUNCTION(execSetModsAsRecentlyInstalled); \
	DECLARE_FUNCTION(execSetPackagesAsRecentlyInstalled);


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyPendingMods); \
	DECLARE_FUNCTION(execDisableModioModManagement); \
	DECLARE_FUNCTION(execEnableModioModManagement); \
	DECLARE_FUNCTION(execGetCheckGameVersion); \
	DECLARE_FUNCTION(execGetNamesOfModsPendingInstall); \
	DECLARE_FUNCTION(execGetNamesOfModsPendingUninstall); \
	DECLARE_FUNCTION(execHasOutstadingRequestOfType); \
	DECLARE_FUNCTION(execIsModPendingUninstall); \
	DECLARE_FUNCTION(execK2_RequestAuthentication); \
	DECLARE_FUNCTION(execK2_RequestFetchModUpdates); \
	DECLARE_FUNCTION(execK2_RequestHasHostHiddenMods); \
	DECLARE_FUNCTION(execK2_RequestModDependencyList); \
	DECLARE_FUNCTION(execK2_RequestModMetaData); \
	DECLARE_FUNCTION(execK2_RequestModThumbnail); \
	DECLARE_FUNCTION(execK2_RequestModThumbnailById); \
	DECLARE_FUNCTION(execK2_RequestSubscribe); \
	DECLARE_FUNCTION(execK2_RequestTermsOfUse); \
	DECLARE_FUNCTION(execMarkRecentlyInstalledModsSuccesful); \
	DECLARE_FUNCTION(execRemoveRequestOfType); \
	DECLARE_FUNCTION(execSetCheckGameVersion); \
	DECLARE_FUNCTION(execSetModsAsRecentlyInstalled); \
	DECLARE_FUNCTION(execSetPackagesAsRecentlyInstalled);


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCSubsystem(); \
	friend struct Z_Construct_UClass_UUGCSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUGCSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCSubsystem)


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUUGCSubsystem(); \
	friend struct Z_Construct_UClass_UUGCSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUGCSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCSubsystem)


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCSubsystem(UUGCSubsystem&&); \
	NO_API UUGCSubsystem(const UUGCSubsystem&); \
public:


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCSubsystem(UUGCSubsystem&&); \
	NO_API UUGCSubsystem(const UUGCSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUGCSubsystem)


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UGCLatentActionManager() { return STRUCT_OFFSET(UUGCSubsystem, UGCLatentActionManager); } \
	FORCEINLINE static uint32 __PPO__ModsPendingUninstall() { return STRUCT_OFFSET(UUGCSubsystem, ModsPendingUninstall); } \
	FORCEINLINE static uint32 __PPO__CachedThumbnails() { return STRUCT_OFFSET(UUGCSubsystem, CachedThumbnails); } \
	FORCEINLINE static uint32 __PPO__ModioRequests() { return STRUCT_OFFSET(UUGCSubsystem, ModioRequests); } \
	FORCEINLINE static uint32 __PPO__ModioSubscribeRequestsIds() { return STRUCT_OFFSET(UUGCSubsystem, ModioSubscribeRequestsIds); } \
	FORCEINLINE static uint32 __PPO__ModioSubscribeDependecyRequestsIds() { return STRUCT_OFFSET(UUGCSubsystem, ModioSubscribeDependecyRequestsIds); } \
	FORCEINLINE static uint32 __PPO__ModioAddDependecyRequestsIds() { return STRUCT_OFFSET(UUGCSubsystem, ModioAddDependecyRequestsIds); }


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_25_PROLOG
#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_SPARSE_DATA \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_RPC_WRAPPERS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_INCLASS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_SPARSE_DATA \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEUGC_API UClass* StaticClass<class UUGCSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
