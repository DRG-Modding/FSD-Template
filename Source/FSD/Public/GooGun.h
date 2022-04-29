#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "EGooGunFireMode.h"
#include "GooGun.generated.h"

class UFXSystemAsset;
class UAnimMontage;
class UFXSystemComponent;
class USoundCue;

UCLASS(Abstract, Blueprintable)
class AGooGun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChargingDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargeChangedDelegate, float, charge);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnStartCharging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnEndCharging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargingDelegate OnChargingFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargeChangedDelegate OnChargeChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostCharged;
    
    UPROPERTY(EditAnywhere)
    float ChargeThreshold;
    
    UPROPERTY(EditAnywhere)
    float AutoStopCharingAfterSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGooGunFireMode FireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FullyChargedFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargedShotCount;
    
    UPROPERTY(EditAnywhere)
    float BuckShotSpreadV;
    
    UPROPERTY(EditAnywhere)
    float BuckShotSpreadH;
    
    UPROPERTY(EditAnywhere)
    float BuckshotArcCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ChargeupParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_ChargeupMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_ChargeupMontage;
    
public:
    AGooGun();
    UFUNCTION(BlueprintPure)
    float GetOverChargeProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCharging();
    
    UFUNCTION(BlueprintPure)
    float GetChargeProgress() const;
    
};

