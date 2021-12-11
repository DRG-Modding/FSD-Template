#pragma once
#include "CoreMinimal.h"
#include "EGatlingGunUpgrade.generated.h"

UENUM()
enum class EGatlingGunUpgrade : uint8 {
    DamageMultiplierAtMaxStabilization,
    HeatRemovedOnKill,
    CriticalOverheat,
    BarrelProximityDamage,
};

