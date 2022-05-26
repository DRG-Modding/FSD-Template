#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EUGCApprovalStatus.h"
#include "EPackageSortField.h"
#include "UGCRegistry.generated.h"

class UUGCPackage;
class AActor;

UCLASS(Blueprintable)
class SIMPLEUGC_API UUGCRegistry : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCPackageMounted, bool, Sandbox);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUGCPackageMounted OnPackageMounted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUGCPackage*> UGCPackages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, TSubclassOf<AActor>> RegisteredOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PackageChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUGCPackage*> UGCPackagesInstalledDuringJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUGCPackage*> UGCPackagesUnmountedDuringJoin;
    
public:
    UUGCRegistry();
    UFUNCTION(BlueprintCallable)
    void UnmountUGCPackages(TArray<FString> ExcludingModIds);
    
    UFUNCTION(BlueprintCallable)
    bool UnmountUGCPackage(UUGCPackage* Package, bool RemoveFromUserSettings);
    
    UFUNCTION(BlueprintCallable)
    void UnmountSandboxUGCPackages();
    
    UFUNCTION(BlueprintCallable)
    void UnmountAllNonVerifiedUGCPackages();
    
    UFUNCTION(BlueprintCallable)
    UUGCPackage* TryGetPackageFromId(const FString& ModId);
    
    UFUNCTION(BlueprintCallable)
    void ResetUGCPackagesManipulatedDuringJoin();
    
    UFUNCTION(BlueprintCallable)
    void RegisterAssetFromPackage(UUGCPackage* Package);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus);
    
    UFUNCTION(BlueprintCallable)
    bool MountUGCPackage(UUGCPackage* Package, bool FromJoining);
    
    UFUNCTION(BlueprintPure)
    bool IsModToBeEnabled(int64 ModId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModInstalledImprecise(const FString& ModName, bool IncludeDeprecatedLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModInstalledByIdOrName(const FString& ModIdOrName, bool IncludeDeprecatedLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModInstalled(const FString& ModId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModEnabled(const FString& ModId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUGCPackage*> GetPackagesWhichDependsOnPackage(UUGCPackage* Package);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUGCPackage*> GetPackagesSorted(EPackageSortField ByField, bool Ascending) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapsInPackage(UUGCPackage* Package, TArray<FName>& Maps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllClassesInPackage(UUGCPackage* Package, TArray<UClass*>& Classes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreModsInstalled(EUGCApprovalStatus ApprovalStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreDeprecatedModsInstalled();
    
};

