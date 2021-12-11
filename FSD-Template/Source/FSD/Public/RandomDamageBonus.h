#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "RandRange.h"
#include "RandomDamageBonus.generated.h"

UCLASS(EditInlineNew)
class URandomDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange RandomDamageRange;
    
public:
    URandomDamageBonus();
};

