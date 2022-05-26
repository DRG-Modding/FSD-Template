#pragma once
#include "CoreMinimal.h"
#include "EZiplineGunUpgrades.generated.h"

UENUM(BlueprintType)
enum class EZiplineGunUpgrades : uint8 {
    MaxAngle,
    MaxDistance,
    MovementSpeed,
    FallDamageReduction,
};

