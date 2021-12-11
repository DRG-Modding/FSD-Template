#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
#include "DecalData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "FlameThrowerItem.generated.h"

class UStatusEffect;
class UMotionAudioController;
class UParticleSystemComponent;
class UDamageComponent;
class USoundCue;
class UStickyFlameSpawner;
class UParticleSystem;
class UItemUpgrade;
class UProjectileLauncherBaseComponent;
class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;

UCLASS(Abstract)
class AFlameThrowerItem : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* FlameParticleComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStickyFlameSpawner* StickyFlames;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* AoEHeatDamageComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* ExplodingTargetsDamageComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UMotionAudioController* MotionAudio;
    
    UPROPERTY(EditAnywhere)
    int32 ShotCostProjectile;
    
    UPROPERTY(EditAnywhere)
    FDecalData ImpactDecal;
    
    UPROPERTY(EditAnywhere)
    float DecalDelay;
    
    UPROPERTY(Transient)
    float CurrentDecalDelay;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ImpactParticles;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ImpactParticleInstance;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* FP_LongReachParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* TP_LongReachParticles;
    
    UPROPERTY(EditAnywhere)
    float VeryLongReachThreshold;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* FP_VeryLongReachParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* TP_VeryLongReachParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FlameParameterNames;
    
    UPROPERTY(EditAnywhere)
    float DamageSphereRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxFlameDistance;
    
    UPROPERTY(EditAnywhere)
    float FlameGrowthPerSecond;
    
    UPROPERTY(EditAnywhere)
    float FlameEndPointResponsiveness;
    
    UPROPERTY(EditAnywhere)
    float FlameIntensityPerSecond;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    float ChanceToFleeOnDamage;
    
    UPROPERTY(EditAnywhere)
    float MeltPointRadius;
    
    UPROPERTY(EditAnywhere)
    float MeltPointBuildTime;
    
    UPROPERTY(EditAnywhere)
    float MeltCarveTime;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* MeltSteamParticle;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(Transient)
    bool LongReachEnabled;
    
    UPROPERTY(Transient)
    bool AoEHeatEnabled;
    
    UPROPERTY(Transient)
    float KilledTargetsExplosionChance;
    
    UPROPERTY(Transient)
    float ShowDamageParticle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DamangeTargetsParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* KilledTargetsExplodingParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* KilledTargetsExplodingSound;
    
    UPROPERTY(Export, VisibleAnywhere)
    UProjectileLauncherBaseComponent* ProjectileLancher;
    
    UFUNCTION(BlueprintCallable)
    void TriggerAoEHeat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMeltIce(const TArray<FVector>& meltPoints);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowTargetBurstIntoFire(FVector_NetQuantize Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_FlameFeedback(FVector_NetQuantize Location, FRotator Rotation);
    
public:
    AFlameThrowerItem();
};

