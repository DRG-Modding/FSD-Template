#pragma once
#include "CoreMinimal.h"
#include "EProjectileSwitchCriteria.generated.h"

UENUM(BlueprintType)
enum class EProjectileSwitchCriteria : uint8 {
    None,
    CharagedProjectile,
    HeatAbove,
    HeatBelow,
    CycleButtonSecondsHeld,
};

