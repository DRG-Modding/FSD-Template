#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "TemperatureStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UTemperatureStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange TemperatureChangeAmount;
    
public:
    UTemperatureStatusEffectItem();
};

