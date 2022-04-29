#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "TemperatureStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTemperatureStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange TemperatureChangeAmount;
    
public:
    UTemperatureStatusEffectItem();
};

