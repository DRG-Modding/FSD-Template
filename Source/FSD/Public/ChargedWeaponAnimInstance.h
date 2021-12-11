#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ChargedWeaponAnimInstance.generated.h"

class AChargedWeapon;

UCLASS(NonTransient)
class UChargedWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool isCharging;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargeupPlayRate;
    
    UPROPERTY(EditAnywhere)
    float ChargeupPlayRateSpeedChange;
    
    UPROPERTY(EditAnywhere)
    float ChargedownPlayRateSpeedChange;
    
    UPROPERTY(EditAnywhere)
    float MaxChargeupPlayRate;
    
    UPROPERTY(Transient)
    AChargedWeapon* Weapon;
    
public:
    UChargedWeaponAnimInstance();
};

