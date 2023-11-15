#pragma once
#include "CoreMinimal.h"
#include "EEnemyHealthScaling.generated.h"

UENUM(BlueprintType)
enum class EEnemyHealthScaling : uint8 {
    SmallEnemy,
    LargeEnemy,
    ExtraLargeEnemy,
    ExtraLargeEnemyB = 4,
    ExtraLargeEnemyC,
    ExtraLargeEnemyD,
    NoScaling = 3,
};

