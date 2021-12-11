#pragma once
#include "CoreMinimal.h"
#include "EMicroMissileLauncherUpgrades.generated.h"

UENUM()
enum class EMicroMissileLauncherUpgrades : uint8 {
    ChargeFire,
    BuckFire,
    DisableHomingOnRelease,
    ShotDirectionHorizontalDegreeOffset,
    ShotDirectionVerticleDegreeOffset,
};

