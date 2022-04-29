#pragma once
#include "CoreMinimal.h"
#include "SimpleNameStrategy.h"
#include "PostfixNameStrategy.generated.h"

UCLASS(Blueprintable)
class FSD_API UPostfixNameStrategy : public USimpleNameStrategy {
    GENERATED_BODY()
public:
    UPostfixNameStrategy();
};

