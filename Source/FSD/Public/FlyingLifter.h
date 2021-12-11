#pragma once
#include "CoreMinimal.h"
#include "AFlyingBug.h"
#include "EGrabberState.h"
#include "Engine/EngineTypes.h"
#include "FlyingLifter.generated.h"

class UCapsuleComponent;
class UGrabberComponent;
class UAudioComponent;
class USoundBase;
class UPrimitiveComponent;
class UInDangerComponent;
class UAnimSequenceBase;
class UPointLightComponent;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFlyingLifterOnGrabSuccess);

UCLASS(Abstract)
class AFlyingLifter : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UGrabberComponent* GrabberComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UCapsuleComponent* GrabCapsule;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAudioComponent* GrabStart;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAudioComponent* GrabEnd;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UAudioComponent* GrabbedIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UInDangerComponent* InDanger;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* ScreamComponent;
    
    UPROPERTY(BlueprintAssignable)
    FFlyingLifterOnGrabSuccess OnGrabSuccess;
    
protected:
    UPROPERTY(EditAnywhere)
    float PreventGrabAfterSpawn;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ShouldScream)
    bool ShouldScream;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EGrabberState GrabberState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WanderingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WanderingAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChaseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChaseAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CarrySpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CarryAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FleeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FleeAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CarryCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* ScreamSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* FleeSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* FleeAnimation;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UCapsuleComponent* GrabberCollider;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool ParalyzeOnGrab;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExtraUpForce;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScreamDistance;
    
private:
    UPROPERTY(Export, Transient)
    UPointLightComponent* GrabLight;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLight(UPointLightComponent* ALight);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SelectAnotherTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStateBroke(AActor* aReleasedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldScream();
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFlyingLifter();
};

