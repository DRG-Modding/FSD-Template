#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "RandRange.h"
#include "PlayerArmorStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UPlayerArmorStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange ChangeAmount;
    
public:
    UPlayerArmorStatusEffectItem();
};

