#pragma once
#include "CoreMinimal.h"
#include "EFNCellularDistanceFunc.generated.h"

UENUM()
enum class EFNCellularDistanceFunc : uint8 {
    EUCLIDEAN,
    EUCLIDEANSQ,
    MANHATTAN,
    HYBRID,
};

