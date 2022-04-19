#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EndMissionResult.h"
#include "DelegateDelegate.h"
#include "PlayerStatsComponent.generated.h"

class UCappedResource;
class APlayerCharacter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UPlayerStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndMissionResultDelegate, const FEndMissionResult&, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegate OnKillAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalKills;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalRevived;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalSupplypodsRequested;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalMOMsMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalMineralsMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TotalXPGained;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool EscapedInPod;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> LastPlayedClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EndMissionResult, meta=(AllowPrivateAccess=true))
    FEndMissionResult EndMissionResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEndMissionResultDelegate OnEndMissionResultReady;
    
public:
    UPlayerStatsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SendMissionAnalytics(bool trackMorkite);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendEndMissionResult(const FEndMissionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnResourceMined(UCappedResource* Resource, float Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EndMissionResult();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndMissionResultReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSurvivedInPod() const;
    
};

