#pragma once
#include "CoreMinimal.h"
#include "ELineCutterProjectileUpgradeType.generated.h"

UENUM(BlueprintType)
enum class ELineCutterProjectileUpgradeType : uint8 {
    LineSize,
    LineSizeMultiplier,
    ExplosiveRound,
    SetDeployDelay,
    AddDeployTime,
    ExplodeOnNextProjectile,
    DoubleLine,
    LineSizeAdd,
    SetDeployTime,
    RollUntilStop,
    Yawing,
    PlasmaTrail,
};

