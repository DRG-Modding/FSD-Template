#pragma once
#include "CoreMinimal.h"
#include "EExitTrackMode.generated.h"

UENUM(BlueprintType)
enum class EExitTrackMode : uint8 {
    None,
    StopInPlace,
    JumpInPlace,
    JumpInCamDir,
    JumpInTrackDir,
};

