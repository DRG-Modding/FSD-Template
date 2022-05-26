#pragma once
#include "CoreMinimal.h"
#include "EFNNoiseType.generated.h"

UENUM(BlueprintType)
enum class EFNNoiseType : uint8 {
    OPENSIMPLEX2,
    OPENSIMPLEX2S,
    CELLULAR,
    PERLIN,
    VALUE_CUBIC,
    VALUE,
};

