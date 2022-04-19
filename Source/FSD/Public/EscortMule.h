#pragma once
#include "CoreMinimal.h"
#include "TriggerAI.h"
#include "FSDPawn.h"
#include "MuleActivatedSignatureDelegate.h"
#include "SpeedChangedSignatureDelegate.h"
#include "IntDelegateDelegate.h"
#include "DelegateDelegate.h"
#include "GaragePathSignatureDelegate.h"
#include "FloatDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleMovementState.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleExtractorSlot.h"
#include "EEscortMissionState.h"
#include "EEscortExtractorState.h"
#include "EscortMule.generated.h"

class AExtractorItem;
class UFriendlyHealthComponent;
class URestrictedResourceBank;
class USimpleObjectInfoComponent;
class USkeletalMeshComponent;
class UOutlineComponent;
class APlayerCharacter;
class UInstantUsable;

UCLASS()
class FSD_API AEscortMule : public AFSDPawn, public ITriggerAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMuleActivatedSignature OnMuleActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSpeedChangedSignature OnSpeedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIntDelegate OnFullCanistersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGaragePathSignature OnExitGaragePathSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFloatDelegate Cheat_SetMuleSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDelegate Cheat_JumpToNextPhase;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFriendlyHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    URestrictedResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTransform PreviousTransform;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FEscortMuleMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SpeedModifier, meta=(AllowPrivateAccess=true))
    float SpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPerTickNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPerTickUnderAttack;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool CannisterVisible_Left;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool CannisterVisible_Right;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    FVector NextStop;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsCarvingTunnel, meta=(AllowPrivateAccess=true))
    bool IsCarvingTunnel;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 FullCanisters;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_ExtractorSlots, meta=(AllowPrivateAccess=true))
    TArray<FEscortMuleExtractorSlot> ExtractorSlots;
    
public:
    AEscortMule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
    
    // Fix for true pure virtual functions not being implemented
};

