#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargedWeapon.h"
#include "ContrailSettings.h"
#include "BulletPathSegment.h"
#include "ShotMultiplier.h"
#include "CoilMaterial.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CoilGun.generated.h"

class UDamageComponent;
class UHealthComponentBase;
class UNiagaraComponent;
class AActor;
class UCoilgunTrailSpawner;
class UStaticMesh;
class UNiagaraSystem;
class UStatusEffect;
class ACoilgunWeaponTrail;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;

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
    
    UPROPERTY(EditAnywhere)
    float MaxAfflictionTime;
    
    UPROPERTY(EditAnywhere)
    float ShotWidth;
    
    UPROPERTY(EditAnywhere)
    float BonusShotWidth;
    
    UPROPERTY(EditAnywhere)
    float ImpactFearFactor;
    
    UPROPERTY(EditAnywhere)
    float OverChargedShotMaxPower;
    
    UPROPERTY(EditAnywhere)
    float MaxOverchargeTime;
    
    UPROPERTY(EditAnywhere)
    float OverchargeTimeStep;
    
    UPROPERTY(EditAnywhere)
    float BrokenShieldboostDuration;
    
    UPROPERTY(EditAnywhere)
    float MinUndercharge;
    
    UPROPERTY(EditAnywhere)
    float TriBustCancelTime;
    
    UPROPERTY(EditAnywhere)
    float TriBurstShotPowerMultiplier;
    
    UPROPERTY(EditAnywhere)
    float TriBurstAmmoMultiplier;
    
    UPROPERTY(EditAnywhere)
    float TriBurstShotCarvingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> NoSpreadEffects;
    
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
    UFUNCTION(Reliable, Server)
    void Server_SpawnTrail(const FVector_NetQuantize& Location, const FRotator& Rotation, float HalfHeight, bool fireTrailEnabled);
    
    UFUNCTION(Reliable, Server)
    void Server_SpawnGroundTrail(const FVector_NetQuantize& Location, const FVector& Direction, float chargeMultiplier);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterPrimaryHit(UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, const FVector_NetQuantize& Origin, const FVector_NetQuantize& Location, int32 BoneIndex, FShotMultiplier Multiplier, int32 mole);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterBonusHit(AActor* Target);
    
    UFUNCTION(Reliable, Server)
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
    
    UFUNCTION()
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
    
    UFUNCTION(NetMulticast, Reliable)
    void All_AdjustTrail(ACoilgunWeaponTrail* Trail, float Length);
    
};

