#pragma once
#include "CoreMinimal.h"
#include "EDamageUpgrade.generated.h"

UENUM(BlueprintType)
enum class EDamageUpgrade : uint8 {
    Damage,
    WeakpointDamageMultiplier,
    StaggerChance,
    StaggerDuration,
    RadialDamage,
    RadialRange,
    ArmorDamageMultiplier,
    FearFactor,
    RadialRangeMultiplier,
    StaggerOnWeakpointOnly,
    FriendlyFireModifier,
    ShattersArmor,
};

