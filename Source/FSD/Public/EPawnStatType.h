#pragma once
#include "CoreMinimal.h"
#include "EPawnStatType.generated.h"

UENUM(BlueprintType)
enum class EPawnStatType : uint8 {
    Multiplicative,
    Additive,
};

