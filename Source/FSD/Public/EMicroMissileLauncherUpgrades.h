#pragma once
#include "CoreMinimal.h"
#include "EMicroMissileLauncherUpgrades.generated.h"

UENUM(BlueprintType)
enum class EMicroMissileLauncherUpgrades : uint8 {
    ChargeFire,
    BuckFire,
    DisableHomingOnRelease,
    ShotDirectionHorizontalDegreeOffset,
    ShotDirectionVerticleDegreeOffset,
};

