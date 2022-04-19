#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "LensActivedDelegateDelegate.h"
#include "LensDeactivedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MicrowaveLense.h"
#include "MultiHitscanHit.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "MultiHitScanHits.h"
#include "MicrowaveWeapon.generated.h"

class UDamageComponent;
class UCapsuleHitscanComponent;
class UFirstPersonNiagaraComponent;
class UNiagaraComponent;
class UStatusEffect;
class AActor;
class UNiagaraSystem;
class UEnemyTemperatureComponent;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;

UCLASS()
class FSD_API AMicrowaveWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleHitscanComponent* CapsuleHitscanComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonNiagaraComponent* FP_MuzzleParticle;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TP_MuzzleParticle;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* ExplodingTargetsDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* RadiantSuperheaterHeat;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* RadiantSuperheaterFrostShock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLensActivedDelegate OnLenseActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLensDeactivedDelegate OnLenseDeactivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> GammaContaminationSTE;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> GammaContaminationZoneSTE;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float GammaContaminationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExplodableBlisterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlisteringNecrosisChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> FireEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> NeuroEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> NeuroToSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> SlowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactParticleEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ImpactParticleTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MicrowaveMuzzle;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MuzzleComp;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ActorsInCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInterval;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float KilledTargetsExplosionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ExplosionOCSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeuroSpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMicrowaveLense WideLense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMicrowaveLense FocusLense;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool RadiantSuperheaterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiantSuperheaterFrostShockChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiantSuperheaterMinColdDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiantSuperheaterFrostTransferFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiantSuperheaterHeatTransferFactor;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UEnemyTemperatureComponent* FrostShockTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool SlowOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> HeatSink;
    
public:
    AMicrowaveWeapon();
    UFUNCTION(BlueprintCallable)
    void UpdateMuzzleAnim(bool InIsFiring);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnExplosiveBoil(UPrimitiveComponent* Target, const FMultiHitscanHit& Hit);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ShowBoilerRayExplosion_Server(FVector_NetQuantize Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ShowBoilerRayExplosion(FVector_NetQuantize Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLensePower(float lensepower);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnShowHitEffect(const FVector& ImpactPoint, const FVector& ImpactNormal, bool hitEnemy);
    
    UFUNCTION(BlueprintCallable)
    void OnServerHitscanHit(const FMultiHitScanHits& Hits);
    
    UFUNCTION(BlueprintCallable)
    void OnRadiantSuperHeaterFrostAoe();
    
    UFUNCTION(BlueprintCallable)
    void OnPushedDamageEffect(UHealthComponentBase* healthComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeatUpdated(float SmoothedTemperature);
    
    UFUNCTION(BlueprintCallable)
    void EndCharacterOverheatAnim();
    
};

