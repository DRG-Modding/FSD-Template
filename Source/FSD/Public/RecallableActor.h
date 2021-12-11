#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DeepPathfinderCharacter.h"
#include "Upgradable.h"
#include "ERecallableActorState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RecallableActor.generated.h"

class ARecallableActor;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorOnRelocateFinished, AActor*, Sender, bool, Succes);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorOnStateChanged, ARecallableActor*, Sender, ERecallableActorState, State);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecallableActorOnReturnFinish, AActor*, Sender, bool, Succes);

UCLASS(Abstract)
class ARecallableActor : public ADeepPathfinderCharacter, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecallableActorOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FRecallableActorOnReturnFinish OnReturnFinish;
    
    UPROPERTY(BlueprintAssignable)
    FRecallableActorOnRelocateFinished OnRelocateFinished;
    
protected:
    UPROPERTY(EditAnywhere)
    float AcceptanceRadius;
    
    UPROPERTY(EditAnywhere)
    float AutoRecallDistance;
    
    UPROPERTY(EditAnywhere)
    float RelocateLandingHeight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> RelocationMarkerType;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RecallTarget)
    TWeakObjectPtr<AActor> RecallTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    ERecallableActorState State;
    
    UPROPERTY(Transient)
    FTransform RelocateTransform;
    
    UPROPERTY(Transient)
    bool RelocateLanded;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> RelocationMarker;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetRecallTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Relocate(FVector NewLocation, FRotator NewRotation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Recall();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReturnFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(ERecallableActorState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RecallTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelocated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecallTargetChanged(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnPathFinished(bool success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveFinished(bool returnedHome);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReturning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMovingOrMoveRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoveRequested() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BeginMove();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARecallableActor();
    
    // Fix for true pure virtual functions not being implemented
};

