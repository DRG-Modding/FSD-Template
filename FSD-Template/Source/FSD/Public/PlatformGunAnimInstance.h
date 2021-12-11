#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeaponAnimInstance.h"
#include "PlatformGunAnimInstance.generated.h"

UCLASS(NonTransient)
class UPlatformGunAnimInstance : public UAmmoDrivenWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpinRate;
    
    UPROPERTY(EditAnywhere)
    float NormalSpinRate;
    
    UPROPERTY(EditAnywhere)
    float LerpSpeed;
    
    UPROPERTY(EditAnywhere)
    float FiredSpinRate;
    
public:
    UFUNCTION(BlueprintCallable)
    void WeaponFired();
    
    UPlatformGunAnimInstance();
};

