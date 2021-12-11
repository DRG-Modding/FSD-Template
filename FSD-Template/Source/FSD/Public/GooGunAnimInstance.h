#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GooGunAnimInstance.generated.h"

UCLASS(NonTransient)
class UGooGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool isCharging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargePercentVisual;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargePercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float OverChargePercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BarrelRotationRate;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetBarrelRotationRate(float RotationRate);
    
    UGooGunAnimInstance();
};

