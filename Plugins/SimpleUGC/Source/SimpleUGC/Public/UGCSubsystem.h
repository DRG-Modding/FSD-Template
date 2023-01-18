#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "Engine/LatentActionManager.h"
#include "EModioRequestType.h"
#include "EUGCPackageError.h"
#include "UGCSubsystem.generated.h"

class UObject;
class UUGCLatentActionManager;
class UUGCPackage;
class UUGCRegistry;
class UUGCSettings;

UCLASS(Blueprintable)
class SIMPLEUGC_API UUGCSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FUGRequiredModsFetched, const TArray<FString>&, ModsToEnable, const TArray<FString>&, ModsToInstall);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUGModProgressDone, const FString&, ModName, const FString&, ModId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUGInstallError, const FString&, ModName, EUGCPackageError, ErrorType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCRequestHandled, EModioRequestType, requestType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FUGCModProgress, const FString&, Name, const TArray<FString>&, ModsPendingDownload, bool, Downloading, int32, Progress, int32, Total);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCModManagementStateChanged, bool, Enabled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUGCLocalUserModsInstalled);
    DECLARE_DYNAMIC_DELEGATE(FUGCHiddenMods);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUGCEscapeMenuOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCAuthenticatedModioUser, bool, Authenticated);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool forceNoMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool noInternetAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool noModioUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJoining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUGCRegistry* UGCRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUGCSettings* UGCSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUGCLatentActionManager* UGCLatentActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ModioTermsAndConditionsAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCAuthenticatedModioUser OnModioUserAuthenticated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGInstallError OnErrorInstalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EUGCPackageError> ModsFailedInstall;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCModProgress OnModDownloadExtractProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGModProgressDone OnModDownloadExtractProgressFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGModProgressDone OnModUninstallProgressFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCModManagementStateChanged OnModManagementStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsModioModManagementEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCLocalUserModsInstalled OnLocalUserModsInstalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocalUserModsInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCEscapeMenuOpened OnEscapeMenuOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCRequestHandled OnModioRequestHandled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CrashingDisabledMods;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUGCPackage*> ModsPendingUninstall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUGCPackage*> ModsPendingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EModioRequestType> ModioRequests;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int64> ModioSubscribeRequestsIds;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int64> ModioSubscribeDependecyRequestsIds;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int64> ModioAddDependecyRequestsIds;
    
public:
    UUGCSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetPackagesAsRecentlyInstalled(TArray<UUGCPackage*> RecentMods);
    
    UFUNCTION(BlueprintCallable)
    void SetModsAsRecentlyInstalled(TArray<FString> RecentMods);
    
    UFUNCTION(BlueprintCallable)
    void SetModidngSettingsMenuEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckGameVersion(bool ShouldCheck);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRequestOfType(EModioRequestType requestType);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecentlyInstalledModsSuccesful();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    void K2_RequestTermsOfUse(UObject* WorldContext, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    bool K2_RequestSubscribe(const FString& ModId);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    void K2_RequestModThumbnailById(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModId);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    void K2_RequestModThumbnail(UObject* WorldContext, FLatentActionInfo LatentInfo, UUGCPackage* Package);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    void K2_RequestModMetaData(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModioStringID, int64& ModId);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    void K2_RequestModDependencyList(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModId, FString& outParentId, TArray<FString>& outModIds);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestFetchModUpdates();
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestAuthentication();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModPendingUninstall(UUGCPackage* InMod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOutstadingRequestOfType(EModioRequestType requestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EModioRequestType> GetQueuedModioRequests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNamesOfModsPendingUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNamesOfModsPendingUninstall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNamesOfModsPendingInstall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetModdingSettingsMenuEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheckGameVersion();
    
    UFUNCTION(BlueprintCallable)
    bool FetchModsForSession(TArray<FString> HostMods, UUGCSubsystem::FUGRequiredModsFetched OnModsFetched);
    
    UFUNCTION(BlueprintCallable)
    void EnableModioModManagement();
    
    UFUNCTION(BlueprintCallable)
    void DisableModioModManagement();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPendingMods(bool FromJoining);
    
};

