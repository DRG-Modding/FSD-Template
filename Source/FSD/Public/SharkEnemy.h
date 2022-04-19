#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ESharkEnemyState.h"
#include "SharkEnemy.generated.h"

class UEnemyComponent;
class UInDangerComponent;
class UPawnSensingComponent;
class USphereComponent;
class UFakeMoverSettings;
class UParticleSystemComponent;
class UDamageComponent;
class UFakePhysGrabberComponent;
class USoundCue;
class UParticleSystem;
class AActor;
class UPrimitiveComponent;
class APawn;
class UHealthComponentBase;

UCLASS(Abstract)
class ASharkEnemy : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* NearTargetSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TearingGroundParticles;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AirTrailParticles;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInDangerComponent* Danger;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* BumpDamage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFakePhysGrabberComponent* RestrictedGrabberComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollSpeedFactor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* JumpSound;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_DiveTime, meta=(AllowPrivateAccess=true))
    float DiveForSeconds;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_RagdollImpact, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RagdollImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpsideDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiltInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiltOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeTimeAfterVounerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaiseHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitLaunchPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenBumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceForJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinJumpCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxJumpCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeGroundCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCirclingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInGroundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInGroundTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartParticleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndParticleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DiveParticles;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
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
    
};

