#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "FlatDamageBonus.generated.h"

class UDamageClass;

UCLASS(EditInlineNew)
class UFlatDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UFlatDamageBonus();
};

