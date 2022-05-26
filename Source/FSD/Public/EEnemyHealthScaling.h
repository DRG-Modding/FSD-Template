#pragma once
#include "CoreMinimal.h"
#include "EEnemyHealthScaling.generated.h"

UENUM(BlueprintType)
enum class EEnemyHealthScaling : uint8 {
    SmallEnemy,
    LargeEnemy,
    ExtraLargeEnemy,
    ExtraLargeEnemyB = 0x4,
    ExtraLargeEnemyC,
    ExtraLargeEnemyD,
    NoScaling = 0x3,
    EEnemyHealthScaling_MAX = 0x7,
};

