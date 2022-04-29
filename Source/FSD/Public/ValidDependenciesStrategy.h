#pragma once
#include "CoreMinimal.h"
#include "ValidatorStrategy.h"
#include "ValidDependenciesStrategy.generated.h"

UCLASS(Blueprintable)
class FSD_API UValidDependenciesStrategy : public UValidatorStrategy {
    GENERATED_BODY()
public:
    UValidDependenciesStrategy();
};

