#pragma once
#include "CoreMinimal.h"
#include "SimpleNameStrategy.h"
#include "PrefixNameStrategy.generated.h"

UCLASS(Blueprintable)
class FSD_API UPrefixNameStrategy : public USimpleNameStrategy {
    GENERATED_BODY()
public:
    UPrefixNameStrategy();
};

