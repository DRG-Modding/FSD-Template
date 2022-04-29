#pragma once
#include "CoreMinimal.h"
#include "ValidatorStrategy.h"
#include "SimpleNameStrategy.generated.h"

UCLASS(Abstract, Blueprintable)
class FSD_API USimpleNameStrategy : public UValidatorStrategy {
    GENERATED_BODY()
public:
    USimpleNameStrategy();
};

