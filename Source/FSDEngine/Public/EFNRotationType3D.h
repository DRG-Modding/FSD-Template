#pragma once
#include "CoreMinimal.h"
#include "EFNRotationType3D.generated.h"

UENUM(BlueprintType)
enum class EFNRotationType3D : uint8 {
    NONE,
    IMPROVE_XY_PLANES,
    IMPROVE_XZ_PLANES,
};

