#pragma once
#include "CoreMinimal.h"
#include "ESharkEnemyState.generated.h"

UENUM(BlueprintType)
enum class ESharkEnemyState : uint8 {
    Idle,
    Circling,
    Attacking,
    Vulnerable,
    Dive,
};

