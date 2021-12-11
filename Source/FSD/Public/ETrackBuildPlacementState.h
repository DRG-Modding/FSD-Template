#pragma once
#include "CoreMinimal.h"
#include "ETrackBuildPlacementState.generated.h"

UENUM()
enum class ETrackBuildPlacementState : uint8 {
    NotBeingPlaced,
    BeingPlaced,
    Finished,
};

