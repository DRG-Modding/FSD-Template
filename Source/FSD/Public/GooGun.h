#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "EGooGunFireMode.h"
#include "GooGun.generated.h"

class USoundCue;
class UFXSystemAsset;
class UFXSystemComponent;
class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGooGunOnStartCharging);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGooGunOnChargeChanged, float, charge);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGooGunOnEndCharging);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGooGunOnChargingFailed);

UCLASS(Abstract)
class AGooGun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGooGunOnStartCharging OnStartCharging;
    
    UPROPERTY(BlueprintAssignable)
    FGooGunOnEndCharging OnEndCharging;
    
    UPROPERTY(BlueprintAssignable)
    FGooGunOnChargingFailed OnChargingFailed;
    
    UPROPERTY(BlueprintAssignable)
    FGooGunOnChargeChanged OnChargeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ShotCostCharged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChargeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoStopCharingAfterSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ShotCostCycle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGooGunFireMode FireMode;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FullyChargedFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChargedShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuckShotSpreadV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuckShotSpreadH;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BuckshotArcCompensation;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ChargeupParticles;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    
    UPROPERTY(Export, Transient)
    UFXSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_ChargeupMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_ChargeupMontage;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverChargeProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCharging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeProgress() const;
    
    AGooGun();
};

