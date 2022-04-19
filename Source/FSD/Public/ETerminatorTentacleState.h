#pragma once
#include "CoreMinimal.h"
#include "ETerminatorTentacleState.generated.h"

UENUM(BlueprintType)
enum class ETerminatorTentacleState : uint8 {
    Idle,
    Grabbing,
    Grabbed,
    Dead,
};

