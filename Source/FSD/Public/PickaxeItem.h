#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Item.h"
#include "UpgradableGear.h"
#include "PickaxePartEquip.h"
#include "CoolDownProgressStyle.h"
#include "GameplayTagContainer.h"
#include "EPickaxeState.h"
#include "EPickaxePartLocation.h"
#include "PickaxeMeshInstance.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "PickaxeItem.generated.h"

class UAnimMontage;
class UForceFeedbackEffect;
class UDamageComponent;
class UPlayerAnimInstance;
class USceneComponent;
class UItemCharacterAnimationSet;
class UStatusEffect;
class USoundCue;
class UMaterialInterface;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class UParticleSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickaxeItemActiveMiningEvent, bool, success);

UCLASS(Abstract)
class APickaxeItem : public AItem, public IUpgradableGear, public IPickaxePartEquip {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool QuadDamageCarving;
    
    UPROPERTY(BlueprintAssignable)
    FPickaxeItemActiveMiningEvent ActiveMiningEvent;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* FP_Root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* FP_Scale;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* TP_Scale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* SpecialDamageComponent;
    
    UPROPERTY(EditAnywhere)
    float SpecialCooldown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpecialCooldownRemaining;
    
    UPROPERTY(EditAnywhere)
    FCoolDownProgressStyle SpecialCooldownUI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RockMiningBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DirtMiningBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OnDamageEnemySlowdownEffect;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer WideDamageTrackingTags;
    
    UPROPERTY(EditAnywhere)
    USoundCue* MiningSound;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* MineRumble;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* PartialMineRumble;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* DamageRumble;
    
    UPROPERTY(EditAnywhere)
    float GeneralImpactAudioVolume;
    
    UPROPERTY(EditAnywhere)
    float HitCooldown;
    
    UPROPERTY(EditAnywhere)
    float MiningDuration;
    
    UPROPERTY(EditAnywhere)
    float DistanceConsideredSameHit;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleFP;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EPickaxeState State;
    
    UPROPERTY(EditAnywhere)
    bool ActiveMiningEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 MaxActiveMiningCount;
    
    UPROPERTY(EditAnywhere)
    float ActiveMiningSpeedBoost;
    
    UPROPERTY(EditAnywhere)
    bool PreventQMining;
    
    UPROPERTY(EditAnywhere)
    float QMiningExpectedDelay;
    
    UPROPERTY(EditAnywhere)
    float QMiningInitialDelay;
    
    UPROPERTY(EditAnywhere)
    float QMiningReducedPlayRatePct;
    
    UPROPERTY(EditAnywhere)
    double QMiningLastHitTime;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ActiveMiningSucceedSound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ActiveMiningFailedSound;
    
    UPROPERTY(BlueprintReadWrite)
    bool CanBezerk;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> BezerkStatusEffect;
    
    UPROPERTY(EditAnywhere)
    bool PowerAttackEnabled;
    
    UPROPERTY(Transient)
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(Transient)
    UMaterialInterface* EquippedMaterial;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerBezerk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetState(EPickaxeState NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_HitBlock(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoPowerAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DigBlock2(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSpecialCooldown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EPickaxeState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadoutChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialCooldownProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateHitBlock(FVector_NetQuantize Position, int32 materia, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize Position, UParticleSystem* Particles, USoundCue* cue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material, float Density, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_DoPowerAttack();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APickaxeItem();
    
    // Fix for true pure virtual functions not being implemented
};

