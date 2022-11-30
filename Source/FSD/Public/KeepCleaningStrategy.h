#pragma once
#include "CoreMinimal.h"
#include "StandardExitStrategy.h"
#include "KeepCleaningStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKeepCleaningStrategy : public UStandardExitStrategy {
    GENERATED_BODY()
public:
    UKeepCleaningStrategy();
};

