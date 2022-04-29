#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "DotEnemyArmorStatusEffectItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDotEnemyArmorStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange damageAmount;
    
public:
    UDotEnemyArmorStatusEffectItem();
};

