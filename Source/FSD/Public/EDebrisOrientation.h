#pragma once
#include "CoreMinimal.h"
#include "EDebrisOrientation.generated.h"

UENUM()
enum class EDebrisOrientation {
    Random,
    RandomXY,
    AlignToSurfaceNormal,
    Fixed,
};

