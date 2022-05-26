#pragma once
#include "CoreMinimal.h"
#include "ETrackBuildPlacementState.generated.h"

UENUM(BlueprintType)
enum class ETrackBuildPlacementState : uint8 {
    NotBeingPlaced,
    BeingPlaced,
    Finished,
};

