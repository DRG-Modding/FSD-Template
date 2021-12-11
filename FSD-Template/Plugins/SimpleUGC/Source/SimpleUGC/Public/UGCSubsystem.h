#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "EModioRequestType.h"
#include "EUGCPackageError.h"
#include "Engine/LatentActionManager.h"
#include "UGCSubsystem.generated.h"

class UObject;
class UUGCPackage;
class UUGCRegistry;
class UUGCLatentActionManager;
class UTexture2DDynamic;
class UModioTermsWrapper;
class UModioModInfoWrapper;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCSubsystemOnModManagementStateChanged, bool, Enabled);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUGCSubsystemOnModDownloadExtractProgressFinished, const FString&, ModName, const FString&, ModId);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCSubsystemOnModioUserAuthenticated, bool, Authenticated);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUGCSubsystemOnLocalUserModsInstalled);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUGCSubsystemOnErrorInstalling, const FString&, ModName, EUGCPackageError, ErrorType);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FUGCSubsystemOnModDownloadExtractProgress, const FString&, Name, const TArray<FString>&, ModsPendingDownload, bool, Downloading, int32, Progress, int32, Total);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUGCSubsystemOnModUninstallProgressFinished, const FString&, ModName, const FString&, ModId);

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool forceNoMods;
    
    UPROPERTY(BlueprintReadOnly)
    UUGCRegistry* UGCRegistry;
    
    UPROPERTY(BlueprintReadOnly)
    bool ModioTermsAndConditionsAccepted;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnModioUserAuthenticated OnModioUserAuthenticated;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnErrorInstalling OnErrorInstalling;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, EUGCPackageError> ModsFailedInstall;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnModDownloadExtractProgress OnModDownloadExtractProgress;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnModDownloadExtractProgressFinished OnModDownloadExtractProgressFinished;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnModUninstallProgressFinished OnModUninstallProgressFinished;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnModManagementStateChanged OnModManagementStateChanged;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsModioModManagementEnabled;
    
    UPROPERTY(BlueprintAssignable)
    FUGCSubsystemOnLocalUserModsInstalled OnLocalUserModsInstalled;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLocalUserModsInstalled;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> CrashingDisabledMods;
    
private:
    UPROPERTY(Transient)
    UUGCLatentActionManager* UGCLatentActionManager;
    
    UPROPERTY(Transient)
    TArray<UUGCPackage*> ModsPendingUninstall;
    
    UPROPERTY(Transient)
    TMap<int64, UTexture2DDynamic*> CachedThumbnails;
    
    UPROPERTY(Transient)
    TArray<EModioRequestType> ModioRequests;
    
    UPROPERTY(Transient)
    TArray<int64> ModioSubscribeRequestsIds;
    
    UPROPERTY(Transient)
    TArray<int64> ModioSubscribeDependecyRequestsIds;
    
    UPROPERTY(Transient)
    TArray<int64> ModioAddDependecyRequestsIds;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPackagesAsRecentlyInstalled(TArray<UUGCPackage*> RecentMods);
    
    UFUNCTION(BlueprintCallable)
    void SetModsAsRecentlyInstalled(TArray<FString> RecentMods);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckGameVersion(bool ShouldCheck);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRequestOfType(EModioRequestType requestType);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecentlyInstalledModsSuccesful();
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestTermsOfUse(UObject* WorldContext, FLatentActionInfo LatentInfo, UModioTermsWrapper*& outTerms);
    
    UFUNCTION(BlueprintCallable)
    bool K2_RequestSubscribe(const FString& ModId);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestModThumbnailById(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModId, UTexture2DDynamic*& outThumbnail);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestModThumbnail(UObject* WorldContext, FLatentActionInfo LatentInfo, UUGCPackage* Package, UTexture2DDynamic*& outThumbnail);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestModMetaData(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModioStringID, UModioModInfoWrapper*& outModInfo);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestModDependencyList(UObject* WorldContext, FLatentActionInfo LatentInfo, const FString& ModId, FString& outParentId, TArray<FString>& outModIds);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestHasHostHiddenMods(UObject* WorldContext, FLatentActionInfo LatentInfo, TArray<FString> sHostModIds, TArray<FString> sClientModIds, bool& outHidden);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestFetchModUpdates();
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestAuthentication();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModPendingUninstall(UUGCPackage* InMod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOutstadingRequestOfType(EModioRequestType requestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNamesOfModsPendingUninstall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNamesOfModsPendingInstall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCheckGameVersion();
    
    UFUNCTION(BlueprintCallable)
    void EnableModioModManagement();
    
    UFUNCTION(BlueprintCallable)
    void DisableModioModManagement();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPendingMods(bool FromJoining);
    
    UUGCSubsystem();
};

