#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "DotEnemyArmorStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UDotEnemyArmorStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange damageAmount;
    
public:
    UDotEnemyArmorStatusEffectItem();
};

