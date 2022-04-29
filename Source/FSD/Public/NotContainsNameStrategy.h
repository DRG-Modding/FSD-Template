#pragma once
#include "CoreMinimal.h"
#include "SimpleNameStrategy.h"
#include "NotContainsNameStrategy.generated.h"

UCLASS(Blueprintable)
class FSD_API UNotContainsNameStrategy : public USimpleNameStrategy {
    GENERATED_BODY()
public:
    UNotContainsNameStrategy();
};

