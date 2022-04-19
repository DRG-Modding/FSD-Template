#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "EGooGunFireMode.h"
#include "GooGun.generated.h"

class UFXSystemComponent;
class USoundCue;
class UFXSystemAsset;
class UAnimMontage;

UCLASS(Abstract)
class AGooGun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChargingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargeChangedDelegate, float, charge);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnStartCharging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnEndCharging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnChargingFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FChargeChangedDelegate OnChargeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostCharged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoStopCharingAfterSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGooGunFireMode FireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FullyChargedFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargedShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuckShotSpreadV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuckShotSpreadH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuckshotArcCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ChargeupParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_ChargeupMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_ChargeupMontage;
    
public:
    AGooGun();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverChargeProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCharging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeProgress() const;
    
};

