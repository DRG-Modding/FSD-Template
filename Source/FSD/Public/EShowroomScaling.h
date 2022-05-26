#pragma once
#include "CoreMinimal.h"
#include "EShowroomScaling.generated.h"

UENUM(BlueprintType)
enum class EShowroomScaling : uint8 {
    NoScaling,
    EnemySmall,
    EnemyMedium,
    EnemyBig,
    EnemyHuge,
};

