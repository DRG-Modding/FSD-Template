#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeaponAnimInstance.h"
#include "PlatformGunAnimInstance.generated.h"

UCLASS(NonTransient)
class UPlatformGunAnimInstance : public UAmmoDrivenWeaponAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float SpinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalSpinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiredSpinRate;
    
public:
    UPlatformGunAnimInstance();
    UFUNCTION(BlueprintCallable)
    void WeaponFired();
    
};

