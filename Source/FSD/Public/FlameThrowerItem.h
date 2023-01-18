#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "AmmoDrivenWeapon.h"
#include "DecalData.h"
#include "Templates/SubclassOf.h"
#include "FlameThrowerItem.generated.h"

class AActor;
class UDamageComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UItemUpgrade;
class UMotionAudioController;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UProjectileLauncherBaseComponent;
class USoundCue;
class UStatusEffect;
class UStickyFlameSpawner;

UCLASS(Abstract, Blueprintable)
class AFlameThrowerItem : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FlameParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStickyFlameSpawner* StickyFlames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* AoEHeatDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* ExplodingTargetsDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionAudioController* MotionAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDecalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ImpactParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FP_LongReachParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TP_LongReachParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VeryLongReachThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FP_VeryLongReachParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TP_VeryLongReachParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FlameParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlameDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameGrowthPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameEndPointResponsiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameIntensityPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> OnFireStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToFleeOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeltPointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeltPointBuildTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeltCarveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MeltSteamParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LongReachEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AoEHeatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float KilledTargetsExplosionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShowDamageParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DamangeTargetsParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* KilledTargetsExplodingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* KilledTargetsExplodingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileLauncherBaseComponent* ProjectileLancher;
    
public:
    AFlameThrowerItem();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerAoEHeat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMeltIce(const TArray<FVector>& meltPoints);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowTargetBurstIntoFire(FVector_NetQuantize Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_FlameFeedback(FVector_NetQuantize Location, FRotator Rotation);
    
};

