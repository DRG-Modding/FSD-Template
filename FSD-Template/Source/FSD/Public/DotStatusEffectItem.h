#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "DotStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UDotStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange damageAmount;
    
public:
    UDotStatusEffectItem();
};

