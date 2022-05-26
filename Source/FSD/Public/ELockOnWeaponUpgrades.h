#pragma once
#include "CoreMinimal.h"
#include "ELockOnWeaponUpgrades.generated.h"

UENUM(BlueprintType)
enum class ELockOnWeaponUpgrades : uint8 {
    MaxLockOnDegree,
    TimeBetweenLockedShots,
    LockOnTime,
    MaxTargets,
    LoseLockOnDegree,
    MaxLockOnRange,
    PrioritizeLowHitpoint,
    AlwaysHitTarget,
    MaxLockOnDuration,
    LockOnControlsSentryGun,
    AoeHitCountThreshhold,
    SentryGunShootsOnLockedShot,
    UseLockOnTargetStatusEffect,
    FearEnabled,
};

