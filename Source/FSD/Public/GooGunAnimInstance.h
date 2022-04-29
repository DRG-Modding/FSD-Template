#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GooGunAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGooGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isCharging;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargePercentVisual;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargePercent;
    
    UPROPERTY(EditAnywhere, Transient)
    float OverChargePercent;
    
    UPROPERTY(EditAnywhere, Transient)
    float BarrelRotationRate;
    
public:
    UGooGunAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetTargetBarrelRotationRate(float RotationRate);
    
};

