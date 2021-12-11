#pragma once
#include "CoreMinimal.h"
#include "SimpleNameStrategy.h"
#include "PreOrPostfixNameStrategy.generated.h"

UCLASS()
class FSD_API UPreOrPostfixNameStrategy : public USimpleNameStrategy {
    GENERATED_BODY()
public:
    UPreOrPostfixNameStrategy();
};

