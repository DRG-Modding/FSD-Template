#pragma once
#include "CoreMinimal.h"
#include "EProjectileUpgrade.generated.h"

UENUM(BlueprintType)
enum class EProjectileUpgrade : uint8 {
    Velocity,
    MaxVelocity,
    Bouncy,
    Lifetime,
    DoOnImpact,
    DoOnImpact2,
    DoOnImpact3,
    DoOnSpawn,
    HomingStrength,
    SetInitialSpeedToMaxSpeed,
    AccelerationMultiplier,
    MaxPropulsionTime,
    GravityScale,
    CustomEvent,
};

