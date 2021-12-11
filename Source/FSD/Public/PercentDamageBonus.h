#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "PercentDamageBonus.generated.h"

UCLASS(EditInlineNew)
class UPercentDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DamageMultiplier;
    
public:
    UPercentDamageBonus();
};

