#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "EnemyTemperatureStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnemyTemperatureStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnFreezeTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemperatureChangeScaleModifier;
    
public:
    UEnemyTemperatureStatusEffectItem();
};

