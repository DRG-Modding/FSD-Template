#pragma once
#include "CoreMinimal.h"
#include "EFacilityTentacleState.generated.h"

UENUM(BlueprintType)
enum class EFacilityTentacleState : uint8 {
    Idle,
    HasTarget,
    Melee,
    Ranged,
};

