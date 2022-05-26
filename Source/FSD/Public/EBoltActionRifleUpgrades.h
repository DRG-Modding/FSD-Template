#pragma once
#include "CoreMinimal.h"
#include "EBoltActionRifleUpgrades.generated.h"

UENUM(BlueprintType)
enum class EBoltActionRifleUpgrades : uint8 {
    FocusSpeed,
    AimedShotStagger,
    AimedWeakShotKillFearFactor,
    FocusDamageBonus,
    UnZoomedAccuracySpread,
    FocusedWeakspotHitStatusEffect,
    NoGravityOnFocus,
    KillReloadTimeBoost,
};

