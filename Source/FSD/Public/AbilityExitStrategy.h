#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityExitStrategy.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UAbilityExitStrategy : public UObject {
    GENERATED_BODY()
public:
    UAbilityExitStrategy();
};

