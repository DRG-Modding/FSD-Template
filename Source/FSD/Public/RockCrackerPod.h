#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "EInputKeys.h"
#include "ERockCrackerstate.h"
#include "RessuplyPod.h"
#include "RockCrackerStateDelegateDelegate.h"
#include "RockCrackerPod.generated.h"

class APlayerCharacter;
class ARockCrackerPod;
class UContinuousUsableComponent;
class UDialogDataAsset;
class UFriendlyHealthComponent;

UCLASS(Blueprintable)
class ARockCrackerPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendlyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContinuousUsableComponent* RepairUsable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRockCrackerStateDelegate OnRockCrackerStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PodState, meta=(AllowPrivateAccess=true))
    ERockCrackerstate PodState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARockCrackerPod* EndPointDrill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* InDangerDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LightsAreGreen, meta=(AllowPrivateAccess=true))
    bool LightsAreGreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainImmunityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YellowLightsThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPerTick;
    
public:
    ARockCrackerPod();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchYellowLights(bool isGreen);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPodState(ERockCrackerstate NewPodState);
    
    UFUNCTION(BlueprintCallable)
    void OnRepairTick(APlayerCharacter* User, EInputKeys Key);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PodState(ERockCrackerstate oldState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LightsAreGreen();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPodDamaged(float damageInfliced, const FDamageData& DamageData, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitState(ERockCrackerstate NewPodState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEventEnded(bool wasSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterState(ERockCrackerstate NewPodState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERockCrackerstate GetPodState() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SwitchYellowLights(bool isGreen);
    
};

