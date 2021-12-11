#pragma once
#include "CoreMinimal.h"
#include "EItemAdjustmentType.generated.h"

UENUM()
enum class EItemAdjustmentType : uint8 {
    None,
    Cieling,
    Wall,
    Floor,
};

