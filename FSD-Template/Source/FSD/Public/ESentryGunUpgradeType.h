#pragma once
#include "CoreMinimal.h"
#include "ESentryGunUpgradeType.generated.h"

UENUM(BlueprintType)
enum class ESentryGunUpgradeType : uint8 {
    MaxAmmo,
    ReloadSpeed,
    ExtraSentry,
    AngleRestriction,
    ManualTargeting,
    MaxRange,
    RotationSpeed,
    BurstCooldown,
};

