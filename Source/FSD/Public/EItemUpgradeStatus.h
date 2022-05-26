#pragma once
#include "CoreMinimal.h"
#include "EItemUpgradeStatus.generated.h"

UENUM(BlueprintType)
enum class EItemUpgradeStatus : uint8 {
    Locked,
    AvailableCannotAfford,
    AvailableCanAfford,
    Owned,
    Equipped,
};

