#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "BoosterModuleActiveDelegate.h"
#include "DecalData.h"
#include "ReflectionTraceResult.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HeavyParticleCannon.generated.h"

class USoundBase;
class UDamageComponent;
class UNiagaraSystem;
class UReflectionHitscanComponent;
class UStickyFlameSpawner;
class UFirstPersonNiagaraComponent;
class UNiagaraComponent;
class UTerrainType;
class UFSDPhysicalMaterial;
class AActor;

UCLASS(Blueprintable)
class AHeavyParticleCannon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReflectionHitscanComponent* HitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStickyFlameSpawner* StickyFlamesSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonNiagaraComponent* FirstPersonBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonNiagaraComponent* FirstPersonLaserSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ThirdPersonBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationGenericSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationEnemySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationEnemy_Local_Sound;
    
    UPROPERTY(EditAnywhere)
    float BeamHitSoundFadeSwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationTailSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BoosterModuleActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoosterModuleActive OnBoosterActiveChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ReflectedBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ReflectedBeam_PhotoSensitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ReflectedLaserSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactParticle_PhotoSensitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ProjectionModuleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ImpactParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal_ShortTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal_LongTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadOnButtonRelease;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenBiomassGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BulkyBeam;
    
    UPROPERTY(EditAnywhere)
    float NormalBeamWidth;
    
    UPROPERTY(EditAnywhere)
    float BulkyBeamWidth;
    
    UPROPERTY(EditAnywhere)
    float ExtraRadialDamagePerSec;
    
    UPROPERTY(EditAnywhere)
    float ExtraRadialRangePerSec;
    
    UPROPERTY(EditAnywhere)
    float CancelCostPercentage;
    
    UPROPERTY(EditAnywhere)
    float ChargeupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* StartChargeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastDecalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNewDecalBeam;
    
    UPROPERTY(EditAnywhere)
    float ProjectionModuleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* PlatformTerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoostActive, meta=(AllowPrivateAccess=true))
    bool BoostActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadBoostsBeam;
    
    UPROPERTY(EditAnywhere)
    float ExtraReloadTimeAfterBoost;
    
    UPROPERTY(EditAnywhere)
    float BoostExtraAmmoCost;
    
    UPROPERTY(EditAnywhere)
    float BeamDependentReloadDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BeamDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BeamTesselationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsBeamActive, meta=(AllowPrivateAccess=true))
    bool bIsBeamActive;
    
public:
    AHeavyParticleCannon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBeamsVisibility(bool isBeamVisible);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBeam(const FReflectionTraceResult& Path);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetBoostActive(bool newActive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetBeamActive(bool inIsBeamActive);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsBeamActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsHittngEnemyChanged(bool isHittingEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExplodePlatform(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void ChargeUpComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChargeChanged(bool isCharging);
    
};

