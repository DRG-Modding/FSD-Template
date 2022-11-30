#pragma once
#include "CoreMinimal.h"
#include "AbilityExitStrategy.h"
#include "StandardExitStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStandardExitStrategy : public UAbilityExitStrategy {
    GENERATED_BODY()
public:
    UStandardExitStrategy();
};

