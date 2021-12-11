#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "UpgradableGear.h"
#include "WeaponFireOwner.h"
#include "Upgradable.h"
#include "SaveGameIDInterface.h"
#include "Skinnable.h"
#include "NotifyMessageReceiver.h"
#include "ItemIDInterface.h"
#include "BoscoLightSetting.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EDroneAIState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Bosco.generated.h"

class ABoscoController;
class UTerrainMaterial;
class UHealthComponent;
class UUpgradableBoscoComponent;
class UBoscoAbillityComponent;
class UParticleSystemComponent;
class UDamageComponent;
class UPawnSensingComponent;
class UDroneMiningToolBase;
class UItemUpgrade;
class UBobbingComponent;
class USkeletalMeshComponent;
class UHitscanComponent;
class UDialogDataAsset;
class USpotLightComponent;
class UPointLightComponent;
class USoundBase;
class UAudioComponent;
class USoundCue;
class UBoscoProjectileAbillity;
class UItemID;
class UAnimSequenceBase;
class UDroneSkinnableComponent;
class UBoscoAbillity;
class AActor;
class UParticleSystem;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoscoOnReviveused, const int32, ReviveCount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoscoOnStateChanged, EDroneAIState, aCurrentState);

UCLASS()
class FSD_API ABosco : public ADeepPathfinderCharacter, public IWeaponFireOwner, public IUpgradableGear, public IUpgradable, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public INotifyMessageReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBoscoAbillityComponent* AbillityComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPawnSensingComponent* Senses;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDroneMiningToolBase* MiningTool;
    
    UPROPERTY(Export, VisibleAnywhere)
    UBobbingComponent* BobbingComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* BoscoMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHitscanComponent* DroneHitScan;
    
    UPROPERTY(Export, VisibleAnywhere)
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* LTrail;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* RTrail;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* MomentumSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* DefendDrilldozerShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DefendGenericShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* MineOrderShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* KillOrderShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* GoToOrderShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ReviveOrderShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* PickupGemShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ReviveThankShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* GeneralCallShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* RocketAbillityShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* CryoGrenadeAbillityShout;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* MineResponse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* CombatResponse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* LightResponse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* ReviveResponse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* AbillityResponse;
    
    UPROPERTY(Transient)
    USoundBase* CurrentResponse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ResponseTime;
    
    UPROPERTY(BlueprintAssignable)
    FBoscoOnReviveused OnReviveused;
    
    UPROPERTY(BlueprintAssignable)
    FBoscoOnStateChanged OnStateChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer LosMatchTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SeeTargetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AbillityErrorSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float INcreasedMiningArea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToResetMiningBoost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiningBoosMultiplier;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(EditAnywhere)
    UBoscoProjectileAbillity* RocketAbillity;
    
    UPROPERTY(EditAnywhere)
    UBoscoProjectileAbillity* CryoGrenadeAbillity;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(Export, VisibleAnywhere)
    UUpgradableBoscoComponent* Upgradable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* SaluteAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* PickupGemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* DropGemAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UAnimSequenceBase*> HitReaction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SaluteDuration;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, Export, VisibleAnywhere)
    UDroneSkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FBoscoLightSetting> LightSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TargetLightSetting;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UBoscoAbillity*> CombatAbillities;
    
    UPROPERTY(Replicated, Transient)
    AActor* RotateTarget;
    
    UPROPERTY(Replicated, Transient)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootSound;
    
    UPROPERTY(EditAnywhere)
    float ShootSoundFadeout;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ShootSoundTail;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* ShootSoundInstance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* TracerEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FireRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinShotsInBurst;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxShotsInBurst;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxRandomBurstCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinRandomBurstCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxFiringAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxEngagementRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinTracerDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TracerSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* ReviveSirens;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UAudioComponent> ReviveSirensComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DistanceToFacePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PrepareToMineRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MiningRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxRevives;
    
    UPROPERTY(Replicated, Transient)
    bool IsFiring;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsInRangeToMine;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsPreparedToMine;
    
    UPROPERTY(Replicated, Transient)
    bool IsMining;
    
    UPROPERTY(Replicated, Transient)
    bool IsReviving;
    
    UPROPERTY(Replicated, Transient)
    bool IsRotateMode;
    
    UPROPERTY()
    ABoscoController* DroneController;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_State)
    EDroneAIState CurrentState;
    
public:
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
    void OnHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ABosco();
    
    // Fix for true pure virtual functions not being implemented
};

