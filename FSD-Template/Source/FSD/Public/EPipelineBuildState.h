#pragma once
#include "CoreMinimal.h"
#include "EPipelineBuildState.generated.h"

UENUM(BlueprintType)
enum class EPipelineBuildState : uint8 {
    NotStarted,
    BeginBuilt,
    Completed,
    Broken,
};

