#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GooGunAnimInstance.generated.h"

UCLASS(NonTransient)
class UGooGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool isCharging;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ChargePercentVisual;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ChargePercent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float OverChargePercent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float BarrelRotationRate;
    
public:
    UGooGunAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetTargetBarrelRotationRate(float RotationRate);
    
};

