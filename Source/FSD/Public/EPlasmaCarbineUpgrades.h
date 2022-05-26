#pragma once
#include "CoreMinimal.h"
#include "EPlasmaCarbineUpgrades.generated.h"

UENUM(BlueprintType)
enum class EPlasmaCarbineUpgrades : uint8 {
    RateOfFireBoostOnFullShield,
    RemoveShieldOnOverheat,
    RemoveShieldOnReload,
};

