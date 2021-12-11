#pragma once
#include "CoreMinimal.h"
#include "StatusEffectItem.h"
#include "FSDPawnStatusEffectItem.generated.h"

UCLASS(EditInlineNew)
class UFSDPawnStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StaggerDurationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AttackSpeedModifier;
    
public:
    UFSDPawnStatusEffectItem();
};

