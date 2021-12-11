#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "PlasmaCarbine.generated.h"

class UAnimMontage;

UCLASS(Abstract)
class APlasmaCarbine : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float RateOfFireBoostOnFullShield;
    
    UPROPERTY()
    bool RemoveShieldOnOverheat;
    
    UPROPERTY()
    bool RemoveShieldOnReload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeatEffectsThreshold;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_CharacterOverheatEndMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_CharacterOverheatEndMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_ItemOverheatEndMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_CharacterReloadEndMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_CharacterReloadEndMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_ItemReloadEndMontage;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ApplyShieldDamage();
    
public:
    APlasmaCarbine();
};

