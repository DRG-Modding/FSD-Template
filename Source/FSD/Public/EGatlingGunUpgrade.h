#pragma once
#include "CoreMinimal.h"
#include "EGatlingGunUpgrade.generated.h"

UENUM(BlueprintType)
enum class EGatlingGunUpgrade : uint8 {
    DamageMultiplierAtMaxStabilization,
    HeatRemovedOnKill,
    CriticalOverheat,
    BarrelProximityDamage,
};

