#pragma once
#include "CoreMinimal.h"
#include "SimpleNameStrategy.h"
#include "ContainsNameStrategy.generated.h"

UCLASS()
class FSD_API UContainsNameStrategy : public USimpleNameStrategy {
    GENERATED_BODY()
public:
    UContainsNameStrategy();
};

