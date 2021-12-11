#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeepDiveBank.h"
#include "UObject/NoExportTypes.h"
#include "DeepDiveManager.generated.h"

class UGeneratedMission;
class UDeepDive;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepDiveManagerOnDeepDivesRefresh);

UCLASS(BlueprintType)
class UDeepDiveManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeepDiveManagerOnDeepDivesRefresh OnDeepDivesRefresh;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDive* ActiveNormalDeepDive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDive* ActiveHardDeepDive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDive* ActiveDeepDive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGeneratedMission* CurrentMission;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float currentDepth;
    
    UPROPERTY(Transient)
    TMap<int32, FDeepDiveBank> DeepDiveBank;
    
    UPROPERTY(Transient)
    int32 NumFailedRequests;
    
    UPROPERTY(Transient)
    int32 BackendDataValid;
    
    UPROPERTY(Transient)
    int32 BackendSeed;
    
    UPROPERTY(Transient)
    bool LockSeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FDateTime BackendExpirationTime;
    
    UPROPERTY(Transient)
    FDateTime LastRequestTime;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDeepDive(UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable)
    void ReInitialize();
    
    UFUNCTION(BlueprintCallable)
    void MarkGivenRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEliteDeepDive(UGeneratedMission* mission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetDeepDiveFromMission(UGeneratedMission* mission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeneratedMission* GetCurrentSingleMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDeepDiveStage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetActiveNormalDeepDive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetActiveHardDeepDive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDeepDive* GetActiveDeepDive() const;
    
    UFUNCTION(BlueprintCallable)
    bool CompleteCurrentSingleMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllSelectedClassesQualified() const;
    
    UDeepDiveManager();
};

