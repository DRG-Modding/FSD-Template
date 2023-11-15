#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderSize.generated.h"

UENUM(BlueprintType)
enum class DeepPathFinderSize : uint8 {
    Invalid,
    Small = 3,
    Medium = 2,
    Large = 1,
};

