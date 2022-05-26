#pragma once
#include "CoreMinimal.h"
#include "EFNCellularDistanceFunc.generated.h"

UENUM(BlueprintType)
enum class EFNCellularDistanceFunc : uint8 {
    EUCLIDEAN,
    EUCLIDEANSQ,
    MANHATTAN,
    HYBRID,
};

