#pragma once
#include "CoreMinimal.h"
#include "ERefineryExtractorPodState.generated.h"

UENUM(BlueprintType)
enum class ERefineryExtractorPodState : uint8 {
    Landing,
    Idle,
    Extracting,
    Returning,
};

