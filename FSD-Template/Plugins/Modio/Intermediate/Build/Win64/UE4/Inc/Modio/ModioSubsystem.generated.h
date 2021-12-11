// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModioErrorCode;
struct FModioOptionalModID;
struct FModioOptionalModDependencyList;
struct FModioOptionalTerms;
struct FModioOptionalModTagOptions;
struct FModioOptionalImage;
struct FModioOptionalModInfo;
struct FModioOptionalModInfoList;
struct FModioModManagementEvent;
struct FModioReportParams;
struct FModioModID;
struct FModioCreateModFileParams;
struct FModioModCreationHandle;
struct FModioCreateModParams;
enum class EModioRating : uint8;
enum class EModioAvatarSize : uint8;
enum class EModioAuthenticationProvider : uint8;
enum class EModioLanguage : uint8;
struct FModioAuthenticationParams;
struct FModioEmailAuthCode;
struct FModioEmailAddress;
enum class EModioGallerySize : uint8;
enum class EModioLogoSize : uint8;
struct FModioFilterParams;
struct FModioOptionalUser;
struct FModioOptionalModProgressInfo;
struct FModioInitializeOptions;
struct FModioModID; struct FModioModCollectionEntry;
struct FModioValidationError;
enum class EModioLogLevel : uint8;
#ifdef MODIO_ModioSubsystem_generated_h
#error "ModioSubsystem.generated.h already included, missing '#pragma once' in ModioSubsystem.h"
#endif
#define MODIO_ModioSubsystem_generated_h

#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_62_DELEGATE \
struct _Script_Modio_eventOnSubmitNewModDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalModID NewModID; \
}; \
static inline void FOnSubmitNewModDelegate_DelegateWrapper(const FScriptDelegate& OnSubmitNewModDelegate, FModioErrorCode ErrorCode, FModioOptionalModID NewModID) \
{ \
	_Script_Modio_eventOnSubmitNewModDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.NewModID=NewModID; \
	OnSubmitNewModDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_61_DELEGATE \
struct _Script_Modio_eventOnGetModDependenciesDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalModDependencyList Dependencies; \
}; \
static inline void FOnGetModDependenciesDelegate_DelegateWrapper(const FScriptDelegate& OnGetModDependenciesDelegate, FModioErrorCode ErrorCode, FModioOptionalModDependencyList Dependencies) \
{ \
	_Script_Modio_eventOnGetModDependenciesDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Dependencies=Dependencies; \
	OnGetModDependenciesDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_59_DELEGATE \
struct _Script_Modio_eventOnGetTermsOfUseDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalTerms Terms; \
}; \
static inline void FOnGetTermsOfUseDelegate_DelegateWrapper(const FScriptDelegate& OnGetTermsOfUseDelegate, FModioErrorCode ErrorCode, FModioOptionalTerms Terms) \
{ \
	_Script_Modio_eventOnGetTermsOfUseDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Terms=Terms; \
	OnGetTermsOfUseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_58_DELEGATE \
struct _Script_Modio_eventOnGetModTagOptionsDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalModTagOptions ModTagOptions; \
}; \
static inline void FOnGetModTagOptionsDelegate_DelegateWrapper(const FScriptDelegate& OnGetModTagOptionsDelegate, FModioErrorCode ErrorCode, FModioOptionalModTagOptions ModTagOptions) \
{ \
	_Script_Modio_eventOnGetModTagOptionsDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ModTagOptions=ModTagOptions; \
	OnGetModTagOptionsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_56_DELEGATE \
struct _Script_Modio_eventOnGetMediaDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalImage Path; \
}; \
static inline void FOnGetMediaDelegate_DelegateWrapper(const FScriptDelegate& OnGetMediaDelegate, FModioErrorCode ErrorCode, FModioOptionalImage Path) \
{ \
	_Script_Modio_eventOnGetMediaDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Path=Path; \
	OnGetMediaDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_55_DELEGATE \
struct _Script_Modio_eventOnGetModInfoDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalModInfo ModInfo; \
}; \
static inline void FOnGetModInfoDelegate_DelegateWrapper(const FScriptDelegate& OnGetModInfoDelegate, FModioErrorCode ErrorCode, FModioOptionalModInfo ModInfo) \
{ \
	_Script_Modio_eventOnGetModInfoDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ModInfo=ModInfo; \
	OnGetModInfoDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_54_DELEGATE \
struct _Script_Modio_eventOnListAllModsDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
	FModioOptionalModInfoList Result; \
}; \
static inline void FOnListAllModsDelegate_DelegateWrapper(const FScriptDelegate& OnListAllModsDelegate, FModioErrorCode ErrorCode, FModioOptionalModInfoList Result) \
{ \
	_Script_Modio_eventOnListAllModsDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.Result=Result; \
	OnListAllModsDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_52_DELEGATE \
struct _Script_Modio_eventOnModManagementDelegate_Parms \
{ \
	FModioModManagementEvent Event; \
}; \
static inline void FOnModManagementDelegate_DelegateWrapper(const FScriptDelegate& OnModManagementDelegate, FModioModManagementEvent Event) \
{ \
	_Script_Modio_eventOnModManagementDelegate_Parms Parms; \
	Parms.Event=Event; \
	OnModManagementDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_51_DELEGATE \
struct _Script_Modio_eventOnErrorOnlyDelegate_Parms \
{ \
	FModioErrorCode ErrorCode; \
}; \
static inline void FOnErrorOnlyDelegate_DelegateWrapper(const FScriptDelegate& OnErrorOnlyDelegate, FModioErrorCode ErrorCode) \
{ \
	_Script_Modio_eventOnErrorOnlyDelegate_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	OnErrorOnlyDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_SPARSE_DATA
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_ReportContentAsync); \
	DECLARE_FUNCTION(execK2_SubmitNewModFileForMod); \
	DECLARE_FUNCTION(execK2_SubmitNewModAsync); \
	DECLARE_FUNCTION(execK2_GetModCreationHandle); \
	DECLARE_FUNCTION(execK2_SubmitModRatingAsync); \
	DECLARE_FUNCTION(execK2_GetUserMediaAvatarAsync); \
	DECLARE_FUNCTION(execK2_ClearUserDataAsync); \
	DECLARE_FUNCTION(execK2_GetTermsOfUseAsync); \
	DECLARE_FUNCTION(execK2_AuthenticateUserExternalAsync); \
	DECLARE_FUNCTION(execK2_AuthenticateUserEmailAsync); \
	DECLARE_FUNCTION(execK2_RequestEmailAuthCodeAsync); \
	DECLARE_FUNCTION(execK2_GetModDependenciesAsync); \
	DECLARE_FUNCTION(execK2_GetModTagOptionsAsync); \
	DECLARE_FUNCTION(execK2_GetModMediaAvatarAsync); \
	DECLARE_FUNCTION(execK2_GetModMediaGalleryImageAsync); \
	DECLARE_FUNCTION(execK2_GetModMediaLogoAsync); \
	DECLARE_FUNCTION(execK2_GetModInfoAsync); \
	DECLARE_FUNCTION(execK2_ListAllModsAsync); \
	DECLARE_FUNCTION(execK2_QueryUserProfile); \
	DECLARE_FUNCTION(execForceUninstallModAsync); \
	DECLARE_FUNCTION(execK2_QueryCurrentModUpdate); \
	DECLARE_FUNCTION(execK2_EnableModManagement); \
	DECLARE_FUNCTION(execK2_FetchExternalUpdatesAsync); \
	DECLARE_FUNCTION(execK2_UnsubscribeFromModAsync); \
	DECLARE_FUNCTION(execK2_ShutdownAsync); \
	DECLARE_FUNCTION(execK2_SubscribeToModAsync); \
	DECLARE_FUNCTION(execK2_InitializeAsync); \
	DECLARE_FUNCTION(execQuerySystemInstallations); \
	DECLARE_FUNCTION(execQueryUserInstallations); \
	DECLARE_FUNCTION(execQueryUserSubscriptions); \
	DECLARE_FUNCTION(execIsModManagementBusy); \
	DECLARE_FUNCTION(execDisableModManagement); \
	DECLARE_FUNCTION(execGetLastValidationError); \
	DECLARE_FUNCTION(execRunPendingHandlers); \
	DECLARE_FUNCTION(execSetLogLevel);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_ReportContentAsync); \
	DECLARE_FUNCTION(execK2_SubmitNewModFileForMod); \
	DECLARE_FUNCTION(execK2_SubmitNewModAsync); \
	DECLARE_FUNCTION(execK2_GetModCreationHandle); \
	DECLARE_FUNCTION(execK2_SubmitModRatingAsync); \
	DECLARE_FUNCTION(execK2_GetUserMediaAvatarAsync); \
	DECLARE_FUNCTION(execK2_ClearUserDataAsync); \
	DECLARE_FUNCTION(execK2_GetTermsOfUseAsync); \
	DECLARE_FUNCTION(execK2_AuthenticateUserExternalAsync); \
	DECLARE_FUNCTION(execK2_AuthenticateUserEmailAsync); \
	DECLARE_FUNCTION(execK2_RequestEmailAuthCodeAsync); \
	DECLARE_FUNCTION(execK2_GetModDependenciesAsync); \
	DECLARE_FUNCTION(execK2_GetModTagOptionsAsync); \
	DECLARE_FUNCTION(execK2_GetModMediaAvatarAsync); \
	DECLARE_FUNCTION(execK2_GetModMediaGalleryImageAsync); \
	DECLARE_FUNCTION(execK2_GetModMediaLogoAsync); \
	DECLARE_FUNCTION(execK2_GetModInfoAsync); \
	DECLARE_FUNCTION(execK2_ListAllModsAsync); \
	DECLARE_FUNCTION(execK2_QueryUserProfile); \
	DECLARE_FUNCTION(execForceUninstallModAsync); \
	DECLARE_FUNCTION(execK2_QueryCurrentModUpdate); \
	DECLARE_FUNCTION(execK2_EnableModManagement); \
	DECLARE_FUNCTION(execK2_FetchExternalUpdatesAsync); \
	DECLARE_FUNCTION(execK2_UnsubscribeFromModAsync); \
	DECLARE_FUNCTION(execK2_ShutdownAsync); \
	DECLARE_FUNCTION(execK2_SubscribeToModAsync); \
	DECLARE_FUNCTION(execK2_InitializeAsync); \
	DECLARE_FUNCTION(execQuerySystemInstallations); \
	DECLARE_FUNCTION(execQueryUserInstallations); \
	DECLARE_FUNCTION(execQueryUserSubscriptions); \
	DECLARE_FUNCTION(execIsModManagementBusy); \
	DECLARE_FUNCTION(execDisableModManagement); \
	DECLARE_FUNCTION(execGetLastValidationError); \
	DECLARE_FUNCTION(execRunPendingHandlers); \
	DECLARE_FUNCTION(execSetLogLevel);


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModioSubsystem(); \
	friend struct Z_Construct_UClass_UModioSubsystem_Statics; \
public: \
	DECLARE_CLASS(UModioSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), MODIO_API) \
	DECLARE_SERIALIZER(UModioSubsystem)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUModioSubsystem(); \
	friend struct Z_Construct_UClass_UModioSubsystem_Statics; \
public: \
	DECLARE_CLASS(UModioSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Modio"), MODIO_API) \
	DECLARE_SERIALIZER(UModioSubsystem)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODIO_API UModioSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModioSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODIO_API, UModioSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODIO_API UModioSubsystem(UModioSubsystem&&); \
	MODIO_API UModioSubsystem(const UModioSubsystem&); \
public:


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODIO_API UModioSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODIO_API UModioSubsystem(UModioSubsystem&&); \
	MODIO_API UModioSubsystem(const UModioSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODIO_API, UModioSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModioSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModioSubsystem)


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_PRIVATE_PROPERTY_OFFSET
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_69_PROLOG
#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_RPC_WRAPPERS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_INCLASS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_PRIVATE_PROPERTY_OFFSET \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_SPARSE_DATA \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_INCLASS_NO_PURE_DECLS \
	FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODIO_API UClass* StaticClass<class UModioSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSDTemplate_Plugins_Modio_Source_Modio_Public_ModioSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
