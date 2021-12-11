#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeStatus.generated.h"

UENUM()
enum class EItemUpgradeStatus : uint8 {
    Locked,
    AvailableCannotAfford,
    AvailableCanAfford,
    Owned,
    Equipped,
};

