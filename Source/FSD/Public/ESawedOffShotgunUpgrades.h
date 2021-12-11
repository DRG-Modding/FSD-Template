#pragma once
#include "CoreMinimal.h"
#include "ESawedOffShotgunUpgrades.generated.h"

UENUM(BlueprintType)
enum class ESawedOffShotgunUpgrades : uint8 {
    FearOnShoot,
    ShockWave = 0x2,
    ShotgunJump,
};

