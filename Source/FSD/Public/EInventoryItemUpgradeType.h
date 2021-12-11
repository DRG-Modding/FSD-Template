#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemUpgradeType : uint8 {
    MovementSpeedWhileUsing,
    CooldownRate,
    UnJamDuration,
    ManualCooldownDelay,
    ManualHeatPerUse,
};

