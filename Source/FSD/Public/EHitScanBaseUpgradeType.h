#pragma once
#include "CoreMinimal.h"
#include "EHitScanBaseUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EHitScanBaseUpgradeType : uint8 {
    MaxVerticalSpread,
    MaxHorizontalSpread,
    MaxPenetrations,
    WeaponAccuracySpreadMultiplier,
    SpreadPerShot,
    MinSpreadWhileMoving,
    SpreadRecoveryMultiplier,
    MinSpreadWhileSprinting,
    MaxSpread,
    RicochetChance,
    RicochetOnWeakspotOnly,
    RicochetBehaviourAll,
    RicochetBehaviourPawnsOnly,
    RicochetBehaviourNotPawns,
};

