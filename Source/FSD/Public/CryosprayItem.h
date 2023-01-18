#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "AmmoDrivenWeapon.h"
#include "DecalData.h"
#include "CryosprayItem.generated.h"

class AProjectileBase;
class UDamageComponent;
class UFSDAudioComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UItemUpgrade;
class UMotionAudioController;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UProjectileLauncherComponent;
class UStickyFlameSpawner;

UCLASS(Abstract, Blueprintable)
class ACryosprayItem : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileLauncherComponent* projectileLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStickyFlameSpawner* StickyFlames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* AoEColdDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionAudioController* VelocityAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FlameParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PressurizedProjectileEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressurizedProjectileDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PressurizeProjectileFullCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChargeupParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ImpactParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FlameParameterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlameDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameGrowthPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCharging, meta=(AllowPrivateAccess=true))
    bool isCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRepressurerising;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepressurerisingDoneAtPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeUpFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* ChargeUpAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureDropMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureGainMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RePressureDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RePressureProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LongReachEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AoEColdEnabled;
    
public:
    ACryosprayItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End, uint8 Power);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerAoECold();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PreLaunchProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRepressurisingChanged(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCharging(bool OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileSpawned(AProjectileBase* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileLaunched(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnPressurizedPartileShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreProjectileLaunch();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PreLaunchProjectile();
    
};

