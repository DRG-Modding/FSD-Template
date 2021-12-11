#pragma once
#include "CoreMinimal.h"
#include "EExitTrackMode.generated.h"

UENUM()
enum class EExitTrackMode : uint8 {
    None,
    StopInPlace,
    JumpInPlace,
    JumpInCamDir,
    JumpInTrackDir,
};

