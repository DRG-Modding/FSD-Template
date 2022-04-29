#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Item.h"
#include "UpgradableGear.h"
#include "PickaxePartEquip.h"
#include "GameplayTagContainer.h"
#include "CoolDownProgressStyle.h"
#include "EPickaxeState.h"
#include "PickaxeMeshInstance.h"
#include "EPickaxePartLocation.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "PickaxeItem.generated.h"

class UPlayerAnimInstance;
class UStatusEffect;
class UAnimMontage;
class UDamageComponent;
class UItemCharacterAnimationSet;
class USceneComponent;
class UFSDPhysicalMaterial;
class USoundCue;
class UForceFeedbackEffect;
class UMaterialInterface;
class UPrimitiveComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class APickaxeItem : public AItem, public IUpgradableGear, public IPickaxePartEquip {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool QuadDamageCarving;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FP_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FP_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TP_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* SpecialDamageComponent;
    
    UPROPERTY(EditAnywhere)
    float SpecialCooldown;
    
    UPROPERTY(EditAnywhere, Transient)
    float SpecialCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoolDownProgressStyle SpecialCooldownUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RockMiningBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirtMiningBonus;
    
    UPROPERTY(EditAnywhere)
    float DamageRange;
    
    UPROPERTY(EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnDamageEnemySlowdownEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WideDamageTrackingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MiningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* MineRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PartialMineRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EPickaxeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PowerAttackRefreshedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventQMining;
    
    UPROPERTY(EditAnywhere)
    float QMiningExpectedDelay;
    
    UPROPERTY(EditAnywhere)
    float QMiningInitialDelay;
    
    UPROPERTY(EditAnywhere)
    float QMiningReducedPlayRatePct;
    
    UPROPERTY(EditAnywhere)
    double QMiningLastHitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBezerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> BezerkStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PowerAttackEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EquippedMaterial;
    
public:
    APickaxeItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerBezerk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetState(EPickaxeState NewState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_HitBlock(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DoPowerAttack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DigBlock2(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    
    UFUNCTION(Reliable, Server)
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
    UFUNCTION(BlueprintPure)
    float GetSpecialCooldownProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateHitBlock(FVector_NetQuantize Position, int32 materia, bool removeDebris, bool isSpecial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize Position, UParticleSystem* Particles, USoundCue* cue);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material, float Density, bool isSpecial);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_DoPowerAttack();
    
    
    // Fix for true pure virtual functions not being implemented
};

