#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeaponAnimInstance.h"
#include "PlatformGunAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPlatformGunAnimInstance : public UAmmoDrivenWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float SpinRate;
    
    UPROPERTY(EditAnywhere)
    float NormalSpinRate;
    
    UPROPERTY(EditAnywhere)
    float LerpSpeed;
    
    UPROPERTY(EditAnywhere)
    float FiredSpinRate;
    
public:
    UPlatformGunAnimInstance();
    UFUNCTION(BlueprintCallable)
    void WeaponFired();
    
};

