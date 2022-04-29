#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EndMissionResult.h"
#include "Components/ActorComponent.h"
#include "DelegateDelegate.h"
#include "PlayerStatsComponent.generated.h"

class APlayerCharacter;
class UCappedResource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndMissionResultDelegate, const FEndMissionResult&, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnKillAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalRevived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalSupplypodsRequested;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TotalGoldMined;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TotalMOMsMined;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TotalMineralsMined;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TotalXPGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool EscapedInPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> LastPlayedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_EndMissionResult, meta=(AllowPrivateAccess=true))
    FEndMissionResult EndMissionResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndMissionResultDelegate OnEndMissionResultReady;
    
public:
    UPlayerStatsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SendMissionAnalytics(bool trackMorkite);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendEndMissionResult(const FEndMissionResult& Result);
    
    UFUNCTION()
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

