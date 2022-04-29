#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "CryoSprayAnimInstance.generated.h"

class ACryosprayItem;

UCLASS(Blueprintable, NonTransient)
class UCryoSprayAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACryosprayItem* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ChargeRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeBlend;
    
    UPROPERTY(EditAnywhere, Transient)
    float Pressure;
    
public:
    UCryoSprayAnimInstance();
};

