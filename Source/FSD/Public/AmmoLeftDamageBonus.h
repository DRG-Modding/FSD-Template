#pragma once
#include "CoreMinimal.h"
#include "FlatDamageBonus.h"
#include "AmmoLeftDamageBonus.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class UAmmoLeftDamageBonus : public UFlatDamageBonus {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* AmmoDamageCurve;
    
public:
    UAmmoLeftDamageBonus();
};

