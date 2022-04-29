#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "WeakpointDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UWeakpointDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
    UWeakpointDamageCondition();
};

