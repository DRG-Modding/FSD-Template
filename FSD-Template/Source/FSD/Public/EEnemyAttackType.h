#pragma once
#include "CoreMinimal.h"
#include "EEnemyAttackType.generated.h"

UENUM(BlueprintType)
enum class EEnemyAttackType : uint8 {
    Melee,
    Ranged,
    Grab,
    Area,
    Move,
};

