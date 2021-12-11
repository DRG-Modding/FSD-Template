#pragma once
#include "CoreMinimal.h"
#include "EPreviewCellSize.generated.h"

UENUM(BlueprintType)
enum class EPreviewCellSize : uint8 {
    PRV_CELL_SIZE_12_5,
    PRV_CELL_SIZE_25,
    PRV_CELL_SIZE_50,
    PRV_CELL_SIZE_100,
    PRV_CELL_SIZE_200,
    PRV_CELL_SIZE_MAX UMETA(Hidden),
};

