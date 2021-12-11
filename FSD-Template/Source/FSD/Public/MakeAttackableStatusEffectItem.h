#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectItem.h"
#include "MakeAttackableStatusEffectItem.generated.h"

class UAttackerPositioningComponent;

UCLASS(EditInlineNew)
class UMakeAttackableStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float AttackCostModifier;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAttackerPositioningComponent> ComponentClass;
    
public:
    UMakeAttackableStatusEffectItem();
};

