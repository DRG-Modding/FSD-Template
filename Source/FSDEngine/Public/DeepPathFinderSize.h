#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderSize.generated.h"

UENUM(BlueprintType)
enum class DeepPathFinderSize : uint8 {
    Invalid,
    Small = 0x3,
    Medium = 0x2,
    Large = 0x1,
    DeepPathFinderSize_MAX = 0x4,
};

