#pragma once
#include "CoreMinimal.h"
#include "EShowroomScaling.generated.h"

UENUM()
enum class EShowroomScaling : uint8 {
    NoScaling,
    EnemySmall,
    EnemyMedium,
    EnemyBig,
    EnemyHuge,
};

