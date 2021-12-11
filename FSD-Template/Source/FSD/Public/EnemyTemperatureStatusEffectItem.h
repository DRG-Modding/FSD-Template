#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyTemperatureStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UEnemyTemperatureStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float WarmingRate;
    
    UPROPERTY(EditAnywhere)
    float UnFreezeTemperature;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangeScaleModifier;
    
public:
    UEnemyTemperatureStatusEffectItem();
};

