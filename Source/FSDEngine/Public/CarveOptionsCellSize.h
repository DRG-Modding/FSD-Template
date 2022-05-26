#pragma once
#include "CoreMinimal.h"
#include "CarveOptionsCellSize.generated.h"

UENUM(BlueprintType)
enum class CarveOptionsCellSize : uint8 {
    CARVE_CELL_SIZE_25,
    CARVE_CELL_SIZE_50,
    CARVE_CELL_SIZE_100,
    CARVE_CELL_SIZE_200,
    CARVE_CELL_SIZE_MAX UMETA(Hidden),
};

