#pragma once
#include "CoreMinimal.h"
#include "EItemAdjustmentType.generated.h"

UENUM(BlueprintType)
enum class EItemAdjustmentType : uint8 {
    None,
    Cieling,
    Wall,
    Floor,
};

