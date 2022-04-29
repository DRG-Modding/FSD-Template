#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "FalseDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFalseDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UFalseDamageCondition();
};

