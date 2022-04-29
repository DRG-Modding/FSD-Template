#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "UObject/NoExportTypes.h"
#include "TracerData.h"
#include "UObject/NoExportTypes.h"
#include "LockCounter.h"
#include "Engine/EngineTypes.h"
#include "LockOnWeapon.generated.h"

class UHitscanComponent;
class UActorTrackingWidget;
class AActor;
class UStatusEffect;
class ALockOnBeam;
class UDamageComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API ALockOnWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaxTargetsDelegate, int32, InMaxTargets);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLockonTargetRotationUpdated, bool, hasTargetLockon, FRotator, socketRotation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLockOnRifleLockingOnState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockOnCountDelegate, int32, InCurrentCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnRifleLockingOnState OnLockingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnRifleLockingOnState OnLockingStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaxTargetsDelegate OnMaxTargetsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnCountDelegate OnLockOnCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockonTargetRotationUpdated OnLockonTargetRotationUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AimTarget;
    
    UPROPERTY(EditAnywhere)
    float LockOnDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotsPerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTargets;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenLockedShots;
    
    UPROPERTY(EditAnywhere)
    float LockOnTime;
    
    UPROPERTY(EditAnywhere)
    float MaxLockOnDegree;
    
    UPROPERTY(EditAnywhere)
    float LoseLockOnDegree;
    
    UPROPERTY(EditAnywhere)
    float DegreeTolerance;
    
    UPROPERTY(EditAnywhere)
    float MaxLockOnRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeLowHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysHitTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxLockOnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockOnControlsSentryGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSentryGunShootsOnLockedShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorTrackingWidget> TrackingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALockOnBeam> LockOnBeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AoeActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AoeHitCountThreshhold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLockOnTargetStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> LockOnTargetStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushStatusEffectEveryXLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LockOnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTracerData ChargedShotTracer;
    
    UPROPERTY(EditAnywhere)
    float ChargeSpeed;
    
    UPROPERTY(EditAnywhere)
    float SlowMovementAtCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FearEnabled;
    
    UPROPERTY(EditAnywhere)
    float FearFactorBase;
    
    UPROPERTY(EditAnywhere)
    float FearFactorPerShotBonus;
    
    UPROPERTY(EditAnywhere)
    float FearRange;
    
    UPROPERTY(EditAnywhere)
    float FearRangePerShotBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsMovementSlowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Charging;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool LastShotWasLockedOn;
    
    UPROPERTY(EditAnywhere)
    float LockOnRecoilMult;
    
public:
    ALockOnWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRifleEye();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMuzzleDirection(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerAoe(FVector Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetTotalLockCount(int32 totalLockCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetLockCount(const FLockCounter& LockCounter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsMovementSlowed(bool bisMovementSlowed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsLatestShotLockedOn(bool bisShotLockedOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsChargingShot(bool bisCharging);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PushStatusEffect(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PopStatusEffect(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FiringComplete(int32 ShotsFired);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RefundAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_AimTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementSlowed(bool isSlowed);
    
    UFUNCTION(BlueprintCallable)
    void OnHitDeadTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(const FHitResult& Hit, bool alwaysPenetrate);
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncFireComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MuzzleLerpToTarget(FVector TargetLocation);
    
};

