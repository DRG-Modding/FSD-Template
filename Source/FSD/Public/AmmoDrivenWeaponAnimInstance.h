#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AmmoDrivenWeaponAnimInstance.generated.h"

class AAmmoDrivenWeapon;

UCLASS(NonTransient)
class UAmmoDrivenWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AAmmoDrivenWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ClipFullPercentage;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool Overheated;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Temperature;
    
public:
    UAmmoDrivenWeaponAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEmpty() const;
    
};

