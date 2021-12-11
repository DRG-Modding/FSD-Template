#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "DotEnemyArmorStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UDotEnemyArmorStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange damageAmount;
    
public:
    UDotEnemyArmorStatusEffectItem();
};

