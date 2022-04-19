#pragma once
#include "CoreMinimal.h"
#include "AFlyingBug.h"
#include "GrabSuccessDelegate.h"
#include "EGrabberState.h"
#include "Engine/EngineTypes.h"
#include "FlyingLifter.generated.h"

class UInDangerComponent;
class UCapsuleComponent;
class UPointLightComponent;
class UGrabberComponent;
class UAudioComponent;
class USoundBase;
class UAnimSequenceBase;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract)
class AFlyingLifter : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPointLightComponent* GrabLight;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGrabberComponent* GrabberComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GrabCapsule;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* GrabbedIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInDangerComponent* InDanger;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* ScreamComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGrabSuccess OnGrabSuccess;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreventGrabAfterSpawn;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EGrabberState GrabberState;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float WanderingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float WanderingAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ChaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ChaseAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float CarrySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float CarryAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FleeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FleeAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float CarryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* FleeSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FleeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool ParalyzeOnGrab;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ExtraUpForce;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ScreamDistance;
    
public:
    AFlyingLifter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SelectAnotherTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStateBroke(AActor* aReleasedPlayer, bool fullGrabElapsed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EGrabberState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnInDanger();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorLeftGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEnterGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJustGrabbed() const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropTarget();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(EGrabberState aGrabberState);
    
};

