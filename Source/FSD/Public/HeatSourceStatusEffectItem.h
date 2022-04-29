#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "ETemperatureIntensity.h"
#include "HeatSourceStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHeatSourceStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETemperatureIntensity Intensity;
    
public:
    UHeatSourceStatusEffectItem();
};

