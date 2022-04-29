#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Engine/NetSerialization.h"
#include "ESharkEnemyState.h"
#include "Engine/EngineTypes.h"
#include "SharkEnemy.generated.h"

class UFakePhysGrabberComponent;
class UPawnSensingComponent;
class USphereComponent;
class UInDangerComponent;
class UDamageComponent;
class UParticleSystemComponent;
class UEnemyComponent;
class USoundCue;
class UFakeMoverSettings;
class UParticleSystem;
class AActor;
class APawn;
class UPrimitiveComponent;
class UHealthComponentBase;

UCLASS(Abstract, Blueprintable)
class ASharkEnemy : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* NearTargetSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TearingGroundParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AirTrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInDangerComponent* Danger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* BumpDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFakePhysGrabberComponent* RestrictedGrabberComponent;
    
    UPROPERTY(EditAnywhere)
    float RagdollSpeedFactor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* JumpSound;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_DiveTime)
    float DiveForSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RagdollImpact, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RagdollImpact;
    
    UPROPERTY(EditAnywhere)
    float LaunchPower;
    
    UPROPERTY(EditAnywhere)
    float GrabTime;
    
    UPROPERTY(EditAnywhere)
    float StopSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float UpsideDownTime;
    
    UPROPERTY(EditAnywhere)
    float RaiseSpeed;
    
    UPROPERTY(EditAnywhere)
    float TiltInSpeed;
    
    UPROPERTY(EditAnywhere)
    float TiltOutSpeed;
    
    UPROPERTY(EditAnywhere)
    float SafeTimeAfterVounerable;
    
    UPROPERTY(EditAnywhere)
    float RaiseHeight;
    
    UPROPERTY(EditAnywhere)
    float AttackDuration;
    
    UPROPERTY(EditAnywhere)
    float HitLaunchPower;
    
    UPROPERTY(EditAnywhere)
    float ChanceToGrab;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenBumps;
    
    UPROPERTY(EditAnywhere)
    float ChanceForJump;
    
    UPROPERTY(EditAnywhere)
    float MinJumpCooldown;
    
    UPROPERTY(EditAnywhere)
    float MaxJumpCooldown;
    
    UPROPERTY(EditAnywhere)
    float JumpForce;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeGroundCheck;
    
    UPROPERTY(EditAnywhere)
    float MinCirclingTime;
    
    UPROPERTY(EditAnywhere)
    float MaxCirclingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* CircleSetttings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* AttackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* PostHitSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* JumpSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* VounerableSettings;
    
    UPROPERTY(EditAnywhere)
    float MaxInGroundTime;
    
    UPROPERTY(EditAnywhere)
    float MinInGroundTime;
    
    UPROPERTY(EditAnywhere)
    float StartParticleTime;
    
    UPROPERTY(EditAnywhere)
    float EndParticleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DiveParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ESharkEnemyState State;
    
public:
    ASharkEnemy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetVulnerable();
    
    UFUNCTION(BlueprintCallable)
    void ReleasePlayer(AActor* playerchar, bool fullGrabElapsed);
    
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
    UFUNCTION()
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
    
};

