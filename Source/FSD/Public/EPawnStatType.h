#pragma once
#include "CoreMinimal.h"
#include "EPawnStatType.generated.h"

UENUM()
enum class EPawnStatType : uint8 {
    Multiplicative,
    Additive,
};

