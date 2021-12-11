#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityGroups.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibilityGroups : uint8 {
    OnScreenHelp,
    EnemyHealth,
    RadarAndDepth,
    PlayerHealthShield,
    PlayerNameClassIcon,
    PlayerItems,
    PlayerResources,
    WeaponInfo,
    Grenades,
    FlashLight,
    Flares,
    Crosshair,
    Objectives,
    TeamDisplay,
    SentryGunDisplay,
};

