#pragma once
#include "CoreMinimal.h"
#include "EDoubleDrillUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EDoubleDrillUpgradeType : uint8 {
    MiningRate,
    MaxFuel,
    HeatRemovalOnKill,
    HeatRemovalOnDamage,
    MovementPenalty,
};

