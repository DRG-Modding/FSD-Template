#pragma once
#include "CoreMinimal.h"
#include "EPipelineExtractorPodAnimState.generated.h"

UENUM(BlueprintType)
enum class EPipelineExtractorPodAnimState : uint8 {
    Folded,
    Idle,
    Running,
    Broken,
};

