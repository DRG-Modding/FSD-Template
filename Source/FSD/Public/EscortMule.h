#pragma once
#include "CoreMinimal.h"
#include "SpeedChangedSignatureDelegate.h"
#include "FSDPawn.h"
#include "TriggerAI.h"
#include "MuleActivatedSignatureDelegate.h"
#include "EEscortExtractorState.h"
#include "IntDelegateDelegate.h"
#include "GaragePathSignatureDelegate.h"
#include "EEscortMissionState.h"
#include "FloatDelegateDelegate.h"
#include "DelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleMovementState.h"
#include "UObject/NoExportTypes.h"
#include "EscortMuleExtractorSlot.h"
#include "EscortMule.generated.h"

class UOutlineComponent;
class AExtractorItem;
class UFriendlyHealthComponent;
class USimpleObjectInfoComponent;
class URestrictedResourceBank;
class UEscortObjective;
class USkeletalMeshComponent;
class APlayerCharacter;
class UInstantUsable;

UCLASS(Blueprintable)
class FSD_API AEscortMule : public AFSDPawn, public ITriggerAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMuleActivatedSignature OnMuleActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeedChangedSignature OnSpeedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnFullCanistersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGaragePathSignature OnExitGaragePathSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate Cheat_SetMuleSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate Cheat_JumpToNextPhase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFriendlyHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URestrictedResourceBank* ResourceBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PreviousTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnObjectiveStateChanged, meta=(AllowPrivateAccess=true))
    EEscortMissionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEscortObjective* EscortObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MovementState, meta=(AllowPrivateAccess=true))
    FEscortMuleMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpeedModifier, meta=(AllowPrivateAccess=true))
    float SpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPerTickNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPerTickUnderAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool CannisterVisible_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool CannisterVisible_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector NextStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCarvingTunnel, meta=(AllowPrivateAccess=true))
    bool IsCarvingTunnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FullCanisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtractorSlots, meta=(AllowPrivateAccess=true))
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
    void OnObjectiveStateChanged(EEscortMissionState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractorSlotChanged(const FEscortMuleExtractorSlot& Slot, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractorDetached(AExtractorItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void ObjectiveStateChange(EEscortMissionState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEscortExtractorState GetExtractorState(UInstantUsable* Usable) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateMule();
    
    
    // Fix for true pure virtual functions not being implemented
};

