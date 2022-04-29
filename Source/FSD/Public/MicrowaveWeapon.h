#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "LensActivedDelegateDelegate.h"
#include "LensDeactivedDelegateDelegate.h"
#include "MicrowaveLense.h"
#include "MultiHitScanHits.h"
#include "Engine/NetSerialization.h"
#include "MultiHitscanHit.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MicrowaveWeapon.generated.h"

class UDamageComponent;
class UCapsuleHitscanComponent;
class UFirstPersonNiagaraComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStatusEffect;
class AActor;
class UParticleSystem;
class USoundCue;
class UEnemyTemperatureComponent;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;

UCLASS(Blueprintable)
class FSD_API AMicrowaveWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleHitscanComponent* CapsuleHitscanComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonNiagaraComponent* FP_MuzzleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TP_MuzzleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* ExplodingTargetsDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* RadiantSuperheaterHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* RadiantSuperheaterFrostShock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLensActivedDelegate OnLenseActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLensDeactivedDelegate OnLenseDeactivated;
    
protected:
    UPROPERTY(EditAnywhere)
    float SwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> GammaContaminationSTE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> GammaContaminationZoneSTE;
    
    UPROPERTY(EditAnywhere)
    float GammaContaminationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExplodableBlisterClass;
    
    UPROPERTY(EditAnywhere)
    float BlisteringNecrosisChance;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenBlisteringNecrosis;
    
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
    UNiagaraSystem* NeuroSpreadParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* P_NeuroSpreadParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* NeuroSpreadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MicrowaveMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MuzzleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ActorsInCapsule;
    
    UPROPERTY(EditAnywhere)
    float WeaponRange;
    
    UPROPERTY(EditAnywhere)
    float ShotWidth;
    
    UPROPERTY(EditAnywhere)
    float DamageInterval;
    
    UPROPERTY(EditAnywhere, Transient)
    float KilledTargetsExplosionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ExplosionOCSystem;
    
    UPROPERTY(EditAnywhere)
    float NeuroSpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMicrowaveLense WideLense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMicrowaveLense FocusLense;
    
    UPROPERTY(EditAnywhere)
    float TemperatureAmplification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RadiantSuperheaterActive;
    
    UPROPERTY(EditAnywhere)
    float RadiantSuperheaterFrostShockChance;
    
    UPROPERTY(EditAnywhere)
    float RadiantSuperheaterHeatShockChance;
    
    UPROPERTY(EditAnywhere)
    float RadiantSuperheaterMinColdDamage;
    
    UPROPERTY(EditAnywhere)
    float RadiantSuperheaterMinHeatDamage;
    
    UPROPERTY(EditAnywhere)
    float RadiantSuperheaterFrostTransferFactor;
    
    UPROPERTY(EditAnywhere)
    float RadiantSuperheaterHeatTransferFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEnemyTemperatureComponent* FrostShockTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SlowOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(Reliable, Server, WithValidation)
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void HeatUpdated(float SmoothedTemperature);
    
    UFUNCTION(BlueprintCallable)
    void EndCharacterOverheatAnim();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowNeuroSpread(const FVector& Location);
    
};

