#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "UpgradableGear.h"
#include "WeaponFireOwner.h"
#include "RejoinListener.h"
#include "Upgradable.h"
#include "ItemAnimationItem.h"
#include "TracerData.h"
#include "Curves/CurveFloat.h"
#include "RecoilSettings.h"
#include "EAmmoWeaponState.h"
#include "UObject/NoExportTypes.h"
#include "AmmoDrivenWeapon.generated.h"

class UForceFeedbackEffect;
class UAmmoDriveWeaponAggregator;
class UWeaponFireComponent;
class UAnimMontage;
class UFXSystemAsset;
class UParticleSystem;
class ULightComponent;
class USoundCue;
class UAudioComponent;
class UDialogDataAsset;
class UItemUpgrade;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmmoDrivenWeaponOnClipCountChanged, int32, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoDrivenWeaponOnItemAutoReloaded);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoDrivenWeaponOnTryReloadEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoDrivenWeaponOnReloadingEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoDrivenWeaponOnShotFiredEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoDrivenWeaponOnStoppedUsingEvent);

UCLASS(Abstract)
class AAmmoDrivenWeapon : public AAnimatedItem, public IWeaponFireOwner, public IUpgradable, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAmmoDrivenWeaponOnClipCountChanged OnClipCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoDrivenWeaponOnTryReloadEvent OnTryReloadEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoDrivenWeaponOnReloadingEvent OnReloadingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoDrivenWeaponOnShotFiredEvent OnShotFiredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoDrivenWeaponOnStoppedUsingEvent OnStoppedUsingEvent;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAmmoDriveWeaponAggregator* Aggregator;
    
    UPROPERTY(EditAnywhere)
    bool LoopFireAnimation;
    
    UPROPERTY(EditAnywhere)
    float LoopFireAnimationBlendoutTime;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_FireAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_FireAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_ReloadAnimation;
    
    UPROPERTY(EditAnywhere)
    FItemAnimationItem OverheatAnimation;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemAnimationItem> GunslingAnimations;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_ReloadAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_FireLastBullet;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Reload;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Reload_TP;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* MuzzleParticles;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* TPMuzzleParticles;
    
    UPROPERTY(EditAnywhere)
    bool UseTriggeredMuzzleParticles;
    
    UPROPERTY(EditAnywhere)
    FTracerData Tracer;
    
    UPROPERTY()
    UParticleSystem* TracerParticles;
    
    UPROPERTY()
    UParticleSystem* TrailParticles;
    
    UPROPERTY()
    float MinTracerDistance;
    
    UPROPERTY()
    float TracerSpeed;
    
    UPROPERTY()
    float TracerOffset;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* CasingParticles;
    
    UPROPERTY(EditAnywhere)
    bool UseTriggeredCasingParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    ULightComponent* MuzzleFlashLight;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve MuzzleFlashLightCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* FireSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* RicochetSound;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* RicochetParticle;
    
    UPROPERTY(EditAnywhere)
    float FireSoundDelayToTail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* FireSoundTail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFireSoundTail2D;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* FireForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UAudioComponent> FireSoundInstance;
    
    UPROPERTY(EditAnywhere)
    float FireSoundFadeDuration;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ReloadSound;
    
    UPROPERTY(EditAnywhere)
    int32 BulletsRemainingForNearEmptySound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* NearEmptySound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* WeaponEmptySound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutShotFired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutOutOfAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutReloading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ClipSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ShotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RateOfFire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurstCycleTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 ClipCount;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float AutoReloadDuration;
    
    UPROPERTY(EditAnywhere)
    USoundCue* AutoReloadCompleteCue;
    
    UPROPERTY(BlueprintAssignable)
    FAmmoDrivenWeaponOnItemAutoReloaded OnItemAutoReloaded;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CycleTimeLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ReloadTimeLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutomaticReload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanReload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRecoilSettings RecoilSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HasAutomaticFire;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsFiring)
    bool IsFiring;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EAmmoWeaponState WeaponState;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Upgraded_Blueprint_Implementation(const TArray<UItemUpgrade*>& upgrades);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StopReload();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReloadWeapon();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_PlayBurstFire(uint8 shotCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Gunsling(uint8 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResupplyAmmo(int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveFiredWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ReloadEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_ReloadBegin();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_IsFiringChanged(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnRicochet(const FVector& Origin, const FVector& Location, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFiring();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClipFull() const;
    
    UFUNCTION(BlueprintCallable)
    void InstantlyReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomEvent1(const UItemUpgrade* Event);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RefillAmmo(float percentage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_StopReload();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_StartReload();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayBurstFire(uint8 shotCount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_Gunsling(uint8 Index);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAmmoDrivenWeapon();
    
    // Fix for true pure virtual functions not being implemented
};

