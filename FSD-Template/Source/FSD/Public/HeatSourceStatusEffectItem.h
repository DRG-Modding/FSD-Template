#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "ETemperatureIntensity.h"
#include "HeatSourceStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UHeatSourceStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Temperature;
    
    UPROPERTY(EditAnywhere)
    ETemperatureIntensity Intensity;
    
public:
    UHeatSourceStatusEffectItem();
};

