#pragma once
#include "CoreMinimal.h"
#include "EAutoShotgunUpgrades.generated.h"

UENUM(BlueprintType)
enum class EAutoShotgunUpgrades : uint8 {
    TurretSpecialAttackEnabled,
    RateOfFireAndAutoMatic,
    CQCBuffOnKill,
};

