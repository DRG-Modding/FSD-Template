#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "TemperatureStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UTemperatureStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange TemperatureChangeAmount;
    
public:
    UTemperatureStatusEffectItem();
};

