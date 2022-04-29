#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "EPatrolBotState.h"
#include "EPatrolBotControlState.h"
#include "Curves/CurveFloat.h"
#include "EDeepMovementState.h"
#include "Engine/EngineTypes.h"
#include "PatrolBot.generated.h"

class UEnemyComponent;
class UHackingUsableComponent;
class UPawnSensingComponent;
class USphereComponent;
class UDamageComponent;
class UParticleSystemComponent;
class UFakeMoverSettings;
class UPawnAlertComponent;
class UPlayerImpactCooldownComponent;
class UAvoidCeilingComponent;
class UAudioComponent;
class UProjectileAttackComponent;
class USoundCue;
class AActor;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API APatrolBot : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHackingUsableComponent* HackingUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* NearTargetSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LaserBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TearingGroundParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* BumpDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnAlertComponent* Alert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerImpactCooldownComponent* ImpactCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAvoidCeilingComponent* CeilingAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* RollingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* FlyingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProjectileAttackComponent* RollingRangedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProjectileAttackComponent* FlyingRangedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProjectileAttackComponent* MissileAttack;
    
protected:
    UPROPERTY(EditAnywhere)
    float MaxMotionSoundVelThresholdFlying;
    
    UPROPERTY(EditAnywhere)
    float MaxMotionSoundVelThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxTurningMotionSoundVelThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugAudio;
    
    UPROPERTY(EditAnywhere)
    float HackedAttackMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsLockedOn, meta=(AllowPrivateAccess=true))
    bool IsLockedOn;
    
    UPROPERTY(EditAnywhere)
    float DelayAfterLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* JumpSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* StartupAccelerationSound;
    
    UPROPERTY(EditAnywhere)
    float LaunchPower;
    
    UPROPERTY(EditAnywhere)
    float SpawnRocketsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EPatrolBotState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ControlState, meta=(AllowPrivateAccess=true))
    EPatrolBotControlState ControlState;
    
    UPROPERTY(EditAnywhere)
    float HackedAttackSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LaserPenetrationDistance;
    
    UPROPERTY(EditAnywhere)
    float MinTurretAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxTurretAngle;
    
    UPROPERTY(EditAnywhere)
    float SpawnRocketsChance;
    
    UPROPERTY(EditAnywhere)
    float GunRange;
    
    UPROPERTY(EditAnywhere)
    float RollingAttackCooldown;
    
    UPROPERTY(EditAnywhere)
    float FlyingAttackCooldown;
    
    UPROPERTY(EditAnywhere)
    float TurretLerpSpeed;
    
    UPROPERTY(EditAnywhere)
    float AimDownwardsOffset;
    
    UPROPERTY(EditAnywhere)
    float AccelerationThreshold;
    
    UPROPERTY(EditAnywhere)
    float LowSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SpeedTiltCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* RollSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* JumpSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* SpawnRocketsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanJump;
    
    UPROPERTY(EditAnywhere)
    float JumpForce;
    
    UPROPERTY(EditAnywhere)
    float StartFlyingTimer;
    
    UPROPERTY(EditAnywhere)
    float MinRollingTime;
    
    UPROPERTY(EditAnywhere)
    float MaxRollingTime;
    
    UPROPERTY(EditAnywhere)
    float MinFlyingTime;
    
    UPROPERTY(EditAnywhere)
    float MaxFlyingTime;
    
    UPROPERTY(EditAnywhere)
    float SinSpeed;
    
    UPROPERTY(EditAnywhere)
    float SinSize;
    
    UPROPERTY(EditAnywhere)
    float FlyingDampOmega;
    
    UPROPERTY(EditAnywhere)
    float RollingDampOmega;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FiringRockets, meta=(AllowPrivateAccess=true))
    bool FiringRockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool Alerted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    APatrolBot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsPatrolling(bool patroling);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHacked();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFiringRockets(bool firing);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReviveDrone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChangedEvent(EPatrolBotState CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnRocketsEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRocketsEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevived();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLockedOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FiringRockets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlState(EPatrolBotControlState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileSpawned();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMovementStateChanged(EDeepMovementState NewState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockedOn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLandedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireRockets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDroneHacked();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDroneAlerted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabled();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* aHealthComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControlStateChanged(EPatrolBotControlState NewControlState);
    
    UFUNCTION(BlueprintCallable)
    void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Jumped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHacked() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ImpactSound();
    
    UFUNCTION(BlueprintCallable)
    void EndFireRockets();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableDrone();
    
};

