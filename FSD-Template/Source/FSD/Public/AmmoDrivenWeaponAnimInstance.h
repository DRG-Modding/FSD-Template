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
    UPROPERTY(Transient)
    AAmmoDrivenWeapon* Weapon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsFiring;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ClipFullPercentage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Overheated;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isEmpty() const;
    
    UAmmoDrivenWeaponAnimInstance();
};

