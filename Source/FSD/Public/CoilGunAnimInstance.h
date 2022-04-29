#pragma once
#include "CoreMinimal.h"
#include "ChargedWeaponAnimInstance.h"
#include "CoilGunAnimInstance.generated.h"

class ACoilGun;

UCLASS(Blueprintable, NonTransient)
class UCoilGunAnimInstance : public UChargedWeaponAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WindUpSpeed;
    
    UPROPERTY(EditAnywhere)
    float WindDownSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxExtention;
    
    UPROPERTY(EditAnywhere, Transient)
    float HandleExtend;
    
    UPROPERTY(EditAnywhere)
    float MaxCoilSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACoilGun* CoilGun;
    
public:
    UCoilGunAnimInstance();
    UFUNCTION(BlueprintPure)
    float GetCoilSpeed(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetCoilAngle(int32 Index) const;
    
};

