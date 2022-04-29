#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "BoltActionWeaponFullyFocusedDelegateDelegate.h"
#include "TracerData.h"
#include "BoltActionWeapon.generated.h"

class UDamageComponent;
class UHitscanBaseComponent;
class UStatusEffect;
class UParticleSystem;
class USoundCue;
class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ABoltActionWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoltActionWeaponFullyFocusedDelegate FullyFocusedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoltActionWeaponFullyFocusedDelegate FocusLostEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHitscanBaseComponent* HitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> FocusedHitSTE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireWeakspotForFocusedHitSTE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNoGravityOnFocusEnabled;
    
    UPROPERTY(EditAnywhere)
    float NoGravityOnFocusDuration;
    
    UPROPERTY(EditAnywhere)
    float NoGravityFocusFallFriction;
    
    UPROPERTY(EditAnywhere)
    float NoGravityFocusGravityScale;
    
    UPROPERTY(EditAnywhere)
    float ZoomSpreadAmount;
    
    UPROPERTY(EditAnywhere)
    float ZoomMinSpreadWhileMoving;
    
    UPROPERTY(EditAnywhere)
    float ChargeSpeed;
    
    UPROPERTY(EditAnywhere)
    float ChargeAmmoCost;
    
    UPROPERTY(EditAnywhere)
    float ChargeRecoilMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ZoomedInAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChargedShotTrailParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTracerData ChargedShotTracer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ButtonDownFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChargedShotFireSound;
    
    UPROPERTY(EditAnywhere)
    float ChargedFoVChange;
    
    UPROPERTY(EditAnywhere)
    float ChargedFoVFadeSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinCharge;
    
    UPROPERTY(EditAnywhere)
    float SlowMovementAtCharge;
    
    UPROPERTY(EditAnywhere)
    float FullChargeDamageBonus;
    
    UPROPERTY(EditAnywhere)
    float AimedShotStaggerChance;
    
    UPROPERTY(EditAnywhere)
    float AimedWeakspotKilLRange;
    
    UPROPERTY(EditAnywhere)
    float TargetKilledReloadTimeBoost;
    
    UPROPERTY(EditAnywhere)
    float TargetKilledReloadTimeBoostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool LastShotWasAimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsMovementSlowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChargeAffectsDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Charging;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeProgress;
    
public:
    ABoltActionWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOverheated(bool isOverheated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsMovementSlowed(bool bisMovementSlowed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsLatestShotFocused(bool bisShotFocused);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsChargingShot(bool bisCharging);
    
    UFUNCTION(BlueprintCallable)
    void OnTimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    
    UFUNCTION()
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnShotPowerSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementSlowed(bool isSlowed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnTargetKilled(bool BoostReloadTime);
    
};

