#pragma once
#include "CoreMinimal.h"
#include "ESplineWarpType.generated.h"

UENUM(BlueprintType)
enum class ESplineWarpType : uint8 {
    Normal,
    ForceZUp,
    StairLike,
};

