#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DamageCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDamageCondition : public UObject {
    GENERATED_BODY()
public:
    UDamageCondition();
};

