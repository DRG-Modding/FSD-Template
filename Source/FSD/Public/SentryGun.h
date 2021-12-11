#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SentryGunMuzzleSetup.h"
#include "GameFramework/Actor.h"
#include "WeaponFireOwner.h"
#include "Upgradable.h"
#include "LaserPointerTarget.h"
#include "TracerData.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SentryGun.generated.h"

class USoundCue;
class USkeletalMeshComponent;
class UParticleSystem;
class AProjectile;
class UAudioComponent;
class USoundBase;
class UHealthComponentBase;
class UWeaponFireComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSentryGunOnAmmoCountChanged, int32, AmmoCount, int32, Change);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSentryGunOnEnabledChanged, bool, IsEnabled);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSentryGunOnMaxAmmoCountChanged, int32, AmmoCount, int32, Change);

UCLASS(Abstract)
class ASentryGun : public AActor, public IWeaponFireOwner, public IUpgradable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSentryGunOnEnabledChanged OnEnabledChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSentryGunOnAmmoCountChanged OnAmmoCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSentryGunOnMaxAmmoCountChanged OnMaxAmmoCountChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SentryGunMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSentryGunMuzzleSetup> SentryGunMuzzels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectile> projectileClass;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ShootingSound;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* MuzzleFlash;
    
    UPROPERTY(EditAnywhere)
    FTracerData TracerData;
    
    UPROPERTY(VisibleAnywhere)
    UParticleSystem* Tracer;
    
    UPROPERTY(EditAnywhere)
    float MinTracerDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool Enabled;
    
    UPROPERTY()
    TArray<FOverlapResult> OverlapCache;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator MinRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator MaxRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AquisitionRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShotCoolDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetLeading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurstShotCoolDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleScanAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleScanSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FinalShotFadeOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnTurn;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer DissallowedTargetTags;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AmmoCount)
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxAmmoCount)
    int32 MaxAmmoCount;
    
    UPROPERTY()
    float Damage;
    
    UPROPERTY(Replicated, Transient)
    float TargetYaw;
    
    UPROPERTY(Replicated, Transient)
    float TargetPitch;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_LastTarget)
    TWeakObjectPtr<UHealthComponentBase> LastTarget;
    
    UPROPERTY(Export, Replicated, Transient)
    TWeakObjectPtr<UHealthComponentBase> PrioritizedTarget;
    
    UPROPERTY(Export, Transient)
    UWeaponFireComponent* WeaponFire;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* ShootingAudioComponent;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UseAmmo(int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAmmoChanged(int32 Delta, int32 currentAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAmmoCount(int32 OldCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoCount(int32 OldCount);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileFired(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnNewTargetRequested(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMuzzleTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMuzzleName() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDeployProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoLeftPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoLeft() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Force_Fire(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoSpent();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASentryGun();
    
    // Fix for true pure virtual functions not being implemented
};

