#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargedWeapon.h"
#include "UObject/NoExportTypes.h"
#include "ShotMultiplier.h"
#include "ContrailSettings.h"
#include "Engine/NetSerialization.h"
#include "CoilMaterial.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "BulletPathSegment.h"
#include "CoilGun.generated.h"

class UDamageComponent;
class UNiagaraComponent;
class UCoilgunTrailSpawner;
class UPrimitiveComponent;
class UStaticMesh;
class UNiagaraSystem;
class UStatusEffect;
class ACoilgunWeaponTrail;
class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;

UCLASS(Blueprintable)
class FSD_API ACoilGun : public AChargedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* OverchargeDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* WeaponBlastDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* ShotwaveBonusDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* MoleBonusDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FullyChargedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FP_OverchargeIndicatorParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TP_FullyChargedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCoilgunTrailSpawner* TrailSpawner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContrailSettings TrailSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ImpactMeshCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* N_ImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> ChargeResistanceStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> ChargeWeaknessStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACoilgunWeaponTrail>> TrailClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CustomMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> HitActorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoilParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCoilMaterial> DynamicCoilMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve CoilColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> RecordedAilments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAfflictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusShotWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactFearFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverChargedShotMaxPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOverchargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverchargeTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrokenShieldboostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUndercharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriBustCancelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriBurstShotPowerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriBurstAmmoMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriBurstShotCarvingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UStatusEffect>> NoSpreadEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstDynamicIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastDynamicIndex;
    
public:
    ACoilGun();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAfflictions();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDynamicMaterials();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToggleCharingBonuses(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnTrail(const FVector_NetQuantize& Location, const FRotator& Rotation, float HalfHeight, bool fireTrailEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnGroundTrail(const FVector_NetQuantize& Location, const FVector& Direction, float chargeMultiplier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterPrimaryHit(UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, const FVector_NetQuantize& Origin, const FVector_NetQuantize& Location, int32 BoneIndex, FShotMultiplier Multiplier, int32 mole);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterBonusHit(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterBlastHit(AActor* Target, const FVector_NetQuantize& Location, UPrimitiveComponent* comp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HitTerrain(const FVector_NetQuantize& Location, const FVector_NetQuantize& End, float maxCarveDepth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FearTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ClearAilments();
    
    UFUNCTION(BlueprintCallable)
    void OnTriBurstCancled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldBrokenBoost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShieldBrokeBoostStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnShieldBoostEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireKill(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTarget(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterShieldBroke(AActor* brokeChar);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBulletPathComplete(const TArray<FBulletPathSegment>& Path);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ShowHit(const FVector_NetQuantize& Location, const FVector_NetQuantize& Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_ShieldBroken();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_AdjustTrail(ACoilgunWeaponTrail* Trail, float Length);
    
};

