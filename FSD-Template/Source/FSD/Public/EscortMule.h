#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "TriggerAI.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleMovementState.h"
#include "EscortMuleExtractorSlot.h"
#include "EEscortMissionState.h"
#include "EEscortExtractorState.h"
#include "EscortMule.generated.h"

class UFriendlyHealthComponent;
class URestrictedResourceBank;
class USimpleObjectInfoComponent;
class USkeletalMeshComponent;
class UOutlineComponent;
class APlayerCharacter;
class UInstantUsable;
class AExtractorItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEscortMuleCheat_JumpToNextPhase);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEscortMuleOnMuleActivated);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleOnSpeedChanged, float, newSpeedModifier);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleOnFullCanistersChanged, int32, IntValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleOnExitGaragePathSet, const TArray<FVector>&, Path);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscortMuleCheat_SetMuleSpeed, float, FloatValue);

UCLASS()
class AEscortMule : public AFSDPawn, public ITriggerAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnMuleActivated OnMuleActivated;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnSpeedChanged OnSpeedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnFullCanistersChanged OnFullCanistersChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleOnExitGaragePathSet OnExitGaragePathSet;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleCheat_SetMuleSpeed Cheat_SetMuleSpeed;
    
    UPROPERTY(BlueprintAssignable)
    FEscortMuleCheat_JumpToNextPhase Cheat_JumpToNextPhase;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFriendlyHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* ObjectInfo;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URestrictedResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform TargetTransform;
    
    UPROPERTY(Transient)
    FTransform PreviousTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_MovementState)
    FEscortMuleMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SpeedModifier)
    float SpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealPerTickNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HealPerTickUnderAttack;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool CannisterVisible_Left;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool CannisterVisible_Right;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    FVector NextStop;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsCarvingTunnel)
    bool IsCarvingTunnel;
    
    UPROPERTY(Transient)
    int32 FullCanisters;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_ExtractorSlots)
    TArray<FEscortMuleExtractorSlot> ExtractorSlots;
    
    UFUNCTION(BlueprintCallable)
    bool TryHeal(APlayerCharacter* User, float Amount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetTransform(FTransform InTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSpeedModifier(float inSpeedModifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFullExtracterAttached(UInstantUsable* Usable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetExtractorDetached(UInstantUsable* Usable);
    
    UFUNCTION(BlueprintCallable)
    void SetExitGaragePath(const TArray<FVector> Path);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetExtractors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PathIsReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpeedModifier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_IsCarvingTunnel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractorSlots();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveStateChanged(EEscortMissionState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractorSlotChanged(const FEscortMuleExtractorSlot& Slot, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractorDetached(AExtractorItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ObjectiveStateChange(EEscortMissionState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEscortExtractorState GetExtractorState(UInstantUsable* Usable) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateMule();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEscortMule();
    
    // Fix for true pure virtual functions not being implemented
};

