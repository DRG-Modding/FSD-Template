#pragma once
#include "CoreMinimal.h"
#include "EFlameThrowerUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EFlameThrowerUpgradeType : uint8 {
    StickyFlameDuration,
    LongReach,
    AoEHeat,
    KilledTargetsExplodeChance,
};

