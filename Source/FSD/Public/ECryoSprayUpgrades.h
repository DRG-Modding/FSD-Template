#pragma once
#include "CoreMinimal.h"
#include "ECryoSprayUpgrades.generated.h"

UENUM(BlueprintType)
enum class ECryoSprayUpgrades : uint8 {
    PressureDropMultiplier,
    PressureGainMultiplier,
    ChargeupTime,
    RePressurisationTime,
    FrozenTargetsCanShatter,
    AoECold,
    LongReach,
};

