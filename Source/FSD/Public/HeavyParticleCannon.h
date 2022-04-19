#pragma once
#include "CoreMinimal.h"
#include "BoosterModuleActiveDelegate.h"
#include "AmmoDrivenWeapon.h"
#include "DecalData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ReflectionTraceResult.h"
#include "HeavyParticleCannon.generated.h"

class UDamageComponent;
class UReflectionHitscanComponent;
class UFirstPersonNiagaraComponent;
class UStickyFlameSpawner;
class UNiagaraComponent;
class USoundBase;
class UNiagaraSystem;
class UTerrainType;
class AActor;
class UFSDPhysicalMaterial;

UCLASS()
class AHeavyParticleCannon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UReflectionHitscanComponent* HitscanComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStickyFlameSpawner* StickyFlamesSpawner;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonNiagaraComponent* FirstPersonBeam;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonNiagaraComponent* FirstPersonLaserSight;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ThirdPersonBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationGenericSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationEnemySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeamHitSoundFadeSwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BeamHitLocationTailSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BoosterModuleActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBoosterModuleActive OnBoosterActiveChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ReflectedBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ReflectedLaserSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ProjectionModuleParticle;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* ImpactParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal_ShortTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal_LongTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadOnButtonRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsAddedPerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwarmerBiomassPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BulkyBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalBeamWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulkyBeamWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraRadialDamagePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraRadialRangePerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CancelCostPercentage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector LastDecalLocation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool IsNewDecalBeam;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ProjectionModuleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainType* PlatformTerrainType;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_BoostActive, meta=(AllowPrivateAccess=true))
    bool BoostActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadBoostsBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraReloadTimeAfterBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BeamDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BeamTesselationRange;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_bIsBeamActive, meta=(AllowPrivateAccess=true))
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
    
};

