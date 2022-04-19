#pragma once
#include "CoreMinimal.h"
#include "EAutoCannonUpgrades.generated.h"

UENUM()
enum class EAutoCannonUpgrades : uint8 {
    FireTimeIncreaseScaleMultiplier,
    DamageBonusAtFullROF,
    StatusEffectAtFullROF,
    StartingFireRate,
    MaxFireRate,
};

