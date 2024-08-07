#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "EMicroMissileLauncherFireMode.h"
#include "Templates/SubclassOf.h"
#include "MicroMissileLauncher.generated.h"

class AProjectile;
class UAnimMontage;
class USoundCue;

UCLASS(Abstract, Blueprintable)
class AMicroMissileLauncher : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChargingDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnStartCharging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnEndCharging;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MuzzleNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeMaxFireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuckShotDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotDirectionHorizontalDegreeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotDirectionVerticleDegreeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMicroMissileLauncherFireMode FireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableHomingOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHomingProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Fire_Empty_Mag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Fire_Level2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Fire_Level2_Empty_Mag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Fire_Level3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Fire_Level3_Empty_Mag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Mag_Feed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WPN_Mag_And_Barrel_Feed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChargedMissileFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerClusterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerClusterHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TriggerClusterHoldDescription;
    
public:
    AMicroMissileLauncher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsCharging(bool isCharging);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetChargedMissile(bool isCharged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerCluster();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextShotBuckShot();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AProjectile* GetFirstActiveProjectileOfType(TSubclassOf<AProjectile> Class) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeCurrentFireCount();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActiveProjectiles(TArray<AProjectile*>& ActiveProjectiles) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SetChargedMissile(bool isCharged);
    
};

