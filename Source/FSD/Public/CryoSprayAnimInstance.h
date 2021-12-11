#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "CryoSprayAnimInstance.generated.h"

class ACryosprayItem;

UCLASS(NonTransient)
class UCryoSprayAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ACryosprayItem* Weapon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsFiring;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator ChargeRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ChargeBlend;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Pressure;
    
public:
    UCryoSprayAnimInstance();
};

