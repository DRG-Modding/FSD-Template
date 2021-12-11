#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "FearAoEBonus.generated.h"

UCLASS(EditInlineNew)
class UFearAoEBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float FearFactor;
    
    UPROPERTY(EditAnywhere)
    float range;
    
public:
    UFearAoEBonus();
};

