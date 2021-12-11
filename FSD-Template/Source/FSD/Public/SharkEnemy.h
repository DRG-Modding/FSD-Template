#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ESharkEnemyState.h"
#include "SharkEnemy.generated.h"

class AActor;
class UFakePhysGrabberComponent;
class UParticleSystemComponent;
class UDamageComponent;
class UPawnSensingComponent;
class USphereComponent;
class UPrimitiveComponent;
class UInDangerComponent;
class UEnemyComponent;
class USoundCue;
class UFakeMoverSettings;
class UParticleSystem;
class APawn;
class UHealthComponentBase;

UCLASS(Abstract)
class ASharkEnemy : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* CollisionSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* NearTargetSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* TearingGroundParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* AirTrailParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UInDangerComponent* Danger;
    
    UPROPERTY(Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* BumpDamage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFakePhysGrabberComponent* RestrictedGrabberComponent;
    
    UPROPERTY(EditAnywhere)
    float RagdollSpeedFactor;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ImpactCue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* JumpSound;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DiveTime)
    float DiveForSeconds;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RagdollImpact)
    FVector_NetQuantize RagdollImpact;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LaunchPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrabTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StopSpeedThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpsideDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RaiseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TiltInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TiltOutSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeTimeAfterVounerable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RaiseHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitLaunchPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToGrab;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinTimeBetweenBumps;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceForJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinJumpCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxJumpCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBeforeGroundCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinCirclingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCirclingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* CircleSetttings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* AttackSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* PostHitSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* JumpSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFakeMoverSettings* VounerableSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxInGroundTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinInGroundTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartParticleTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndParticleTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* DiveParticles;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_State)
    ESharkEnemyState State;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVulnerable();
    
    UFUNCTION(BlueprintCallable)
    void ReleasePlayer(AActor* playerchar);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopRecentlyBumpedPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChangedEvent(ESharkEnemyState CurrentState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSeePawn(APawn* APawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(ESharkEnemyState oldState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_RagdollImpact();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DiveTime();
    
    UFUNCTION(BlueprintCallable)
    void OnNearTarget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLandedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrabbedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitState(ESharkEnemyState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterState(ESharkEnemyState NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* aHealthComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float aAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Jumped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ImpactSound();
    
    UFUNCTION(BlueprintCallable)
    void DiveShow();
    
    UFUNCTION(BlueprintCallable)
    void DiveHide();
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivateDanger();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASharkEnemy();
};

