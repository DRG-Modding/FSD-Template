#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "DecalData.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "CryosprayItem.generated.h"

class UMotionAudioController;
class UProjectileLauncherComponent;
class UParticleSystemComponent;
class UDamageComponent;
class UStickyFlameSpawner;
class UParticleSystem;
class UFSDAudioComponent;
class UItemUpgrade;
class UHealthComponentBase;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class AProjectileBase;

UCLASS(Abstract, Blueprintable)
class ACryosprayItem : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProjectileLauncherComponent* projectileLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStickyFlameSpawner* StickyFlames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* AoEColdDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMotionAudioController* VelocityAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FlameParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PressurizedProjectileEnabled;
    
    UPROPERTY(EditAnywhere)
    float PressurizedProjectileDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PressurizeProjectileFullCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChargeupParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData ImpactDecal;
    
    UPROPERTY(EditAnywhere)
    float DecalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImpactParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ImpactParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FlameParameterNames;
    
    UPROPERTY(EditAnywhere)
    float DamageSphereRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxFlameDistance;
    
    UPROPERTY(EditAnywhere)
    float FlameGrowthPerSecond;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(EditAnywhere)
    float ChargeupTime;
    
    UPROPERTY(EditAnywhere)
    float ChargeDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCharging, meta=(AllowPrivateAccess=true))
    bool isCharging;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRepressurerising;
    
    UPROPERTY(EditAnywhere)
    float RepressurerisingDoneAtPct;
    
    UPROPERTY(EditAnywhere)
    float ChargeUpFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* ChargeUpAudioComponent;
    
    UPROPERTY(EditAnywhere)
    float PressureTime;
    
    UPROPERTY(EditAnywhere)
    float PressureDropMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PressureGainMultiplier;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentPressure;
    
    UPROPERTY(EditAnywhere)
    float RePressureDuration;
    
    UPROPERTY(EditAnywhere, Transient)
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
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End, uint8 Power);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerAoECold();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PreLaunchProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRepressurisingChanged(bool Value);
    
    UFUNCTION()
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

