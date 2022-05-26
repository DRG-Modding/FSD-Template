#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "HackingPod_DelegateDelegate.h"
#include "EHackingPodState.h"
#include "FacilityHackingPod.generated.h"

UCLASS(Blueprintable)
class FSD_API AFacilityHackingPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHackingPod_Delegate OnHackingPodStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PodState, meta=(AllowPrivateAccess=true))
    EHackingPodState PodState;
    
public:
    AFacilityHackingPod();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EHackingPodState aState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PodState(EHackingPodState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitState(EHackingPodState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterState(EHackingPodState NextState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHackingPodState GetState() const;
    
};

