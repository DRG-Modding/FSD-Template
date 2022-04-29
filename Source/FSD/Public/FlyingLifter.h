#pragma once
#include "CoreMinimal.h"
#include "AFlyingBug.h"
#include "GrabSuccessDelegate.h"
#include "EGrabberState.h"
#include "Engine/EngineTypes.h"
#include "FlyingLifter.generated.h"

class UPointLightComponent;
class UAudioComponent;
class UGrabberComponent;
class UCapsuleComponent;
class UInDangerComponent;
class USoundBase;
class UAnimSequenceBase;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class AFlyingLifter : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* GrabLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGrabberComponent* GrabberComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GrabCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* GrabbedIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInDangerComponent* InDanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* ScreamComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabSuccess OnGrabSuccess;
    
protected:
    UPROPERTY(EditAnywhere)
    float PreventGrabAfterSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EGrabberState GrabberState;
    
    UPROPERTY(EditAnywhere)
    float WanderingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WanderingAcceleration;
    
    UPROPERTY(EditAnywhere)
    float ChaseSpeed;
    
    UPROPERTY(EditAnywhere)
    float ChaseAcceleration;
    
    UPROPERTY(EditAnywhere)
    float CarrySpeed;
    
    UPROPERTY(EditAnywhere)
    float CarryAcceleration;
    
    UPROPERTY(EditAnywhere)
    float FleeSpeed;
    
    UPROPERTY(EditAnywhere)
    float FleeAcceleration;
    
    UPROPERTY(EditAnywhere)
    float CarryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FleeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* FleeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParalyzeOnGrab;
    
    UPROPERTY(EditAnywhere)
    float ExtraUpForce;
    
    UPROPERTY(EditAnywhere)
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

