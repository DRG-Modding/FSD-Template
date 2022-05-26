#pragma once
#include "CoreMinimal.h"
#include "EDebrisOrientation.generated.h"

UENUM(BlueprintType)
enum class EDebrisOrientation : uint8 {
    Random,
    RandomXY,
    AlignToSurfaceNormal,
    Fixed,
};

