#pragma once
#include "CoreMinimal.h"
#include "Upgradable.h"
#include "DeepPathfinderCharacter.h"
#include "NotifyMessageReceiver.h"
#include "WeaponFireOwner.h"
#include "Skinnable.h"
#include "UpgradableGear.h"
#include "SaveGameIDInterface.h"
#include "ItemIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DamageData.h"
#include "ReviveUsedSigDelegate.h"
#include "StateChangedSigDelegate.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "BoscoLightSetting.h"
#include "UObject/NoExportTypes.h"
#include "EDroneAIState.h"
#include "Engine/NetSerialization.h"
#include "Bosco.generated.h"

class USoundBase;
class UHitscanComponent;
class UBoscoAbillity;
class UHealthComponent;
class UBoscoAbillityComponent;
class USpotLightComponent;
class UDamageComponent;
class UUpgradableBoscoComponent;
class UPawnSensingComponent;
class UDroneMiningToolBase;
class UBobbingComponent;
class UPointLightComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class USoundCue;
class UAudioComponent;
class UDialogDataAsset;
class UItemUpgrade;
class UItemID;
class UBoscoProjectileAbillity;
class UAnimSequenceBase;
class UDroneSkinnableComponent;
class AActor;
class UParticleSystem;
class ABoscoController;
class UTerrainMaterial;
class APlayerCharacter;

UCLASS()
class FSD_API ABosco : public ADeepPathfinderCharacter, public IWeaponFireOwner, public IUpgradableGear, public IUpgradable, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public INotifyMessageReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoscoAbillityComponent* AbillityComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDroneMiningToolBase* MiningTool;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBobbingComponent* BobbingComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BoscoMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHitscanComponent* DroneHitScan;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LTrail;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RTrail;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* MomentumSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefendDrilldozerShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefendGenericShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MineOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* KillOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GoToOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ReviveOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* PickupGemShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ReviveThankShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GeneralCallShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* RocketAbillityShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* CryoGrenadeAbillityShout;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* MineResponse;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* CombatResponse;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* LightResponse;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* ReviveResponse;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* AbillityResponse;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentResponse;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ResponseTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FReviveUsedSig OnReviveused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStateChangedSig OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LosMatchTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeeTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AbillityErrorSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float INcreasedMiningArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToResetMiningBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningBoosMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoscoProjectileAbillity* RocketAbillity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoscoProjectileAbillity* CryoGrenadeAbillity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUpgradableBoscoComponent* Upgradable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SaluteAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PickupGemAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DropGemAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> HitReaction;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SaluteDuration;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDroneSkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoscoLightSetting> LightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 TargetLightSetting;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<UBoscoAbillity*> CombatAbillities;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* RotateTarget;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootSoundFadeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSoundTail;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShootSoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MinShotsInBurst;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MaxShotsInBurst;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MaxRandomBurstCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MinRandomBurstCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MaxFiringAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MaxEngagementRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MinTracerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float TracerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* ReviveSirens;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAudioComponent> ReviveSirensComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float DistanceToFacePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float PrepareToMineRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float MiningRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 MaxRevives;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsInRangeToMine;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsPreparedToMine;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsReviving;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsRotateMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ABoscoController* DroneController;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EDroneAIState CurrentState;
    
public:
    ABosco();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UseABillity();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopShootingSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StateChanged(EDroneAIState aCurrentState);
    
    UFUNCTION(BlueprintCallable)
    void StartSelfDestruct();
    
    UFUNCTION(BlueprintCallable)
    void SetIsReviving(bool aIsReviving);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRepairing(bool isRepairing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelfDestruct();
    
    UFUNCTION(BlueprintCallable)
    void ReviveCounterChanged(int32 remainingCharges);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Respond();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySalute();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetBurrowChange(bool burrowed);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EDroneAIState prevState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReadyToShoot();
    
    UFUNCTION(BlueprintCallable)
    void OnNotReadyToShoot();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Amount, float BaseAmount, const FDamageData& DamageData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGrabbedGem();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MineEffects(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation);
    
    UFUNCTION(BlueprintCallable)
    UUpgradableBoscoComponent* GetUpgradeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReviveCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoscoAbillityComponent* GetPlayerAbillity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroneAIState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCarryInterrupted() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoPickupGemAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnSelfDestruct();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

