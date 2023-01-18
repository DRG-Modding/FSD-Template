#pragma once
#include "CoreMinimal.h"
#include "AttackingPointInterface.h"
#include "DelegateDelegate.h"
#include "ETerminatorTentacleState.h"
#include "TentacleBase.h"
#include "TerminatorTarget.h"
#include "TriggerAI.h"
#include "TerminatorTentacle.generated.h"

class AActor;
class UAnimMontage;
class UAnimSequenceBase;
class UGrabberComponent;
class UHealthComponentBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FSD_API ATerminatorTentacle : public ATentacleBase, public ITriggerAI, public IAttackingPointInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnTentacleStateChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FlairAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFlairAnimCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlairAnimationCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Extended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TentacleState, meta=(AllowPrivateAccess=true))
    ETerminatorTentacleState TentacleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrabberComponent* GrabberComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DesiredTarget, meta=(AllowPrivateAccess=true))
    FTerminatorTarget DesiredTarget;
    
public:
    ATerminatorTentacle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayHitReaction(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(ETerminatorTentacleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TentacleState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadExitedTerrain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadEnteredTerrain();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGrabbedActorReleased(AActor* Actor, bool fullGrabElapsed);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathEvent(UHealthComponentBase* EnemyHealth);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MoveToGrabTarget(AActor* Target, float grabDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeTentacleState(ETerminatorTentacleState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayFlairAnimation();
    
    
    // Fix for true pure virtual functions not being implemented
};

