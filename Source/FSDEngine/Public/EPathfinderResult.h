#pragma once
#include "CoreMinimal.h"
#include "EPathfinderResult.generated.h"

UENUM(BlueprintType)
enum class EPathfinderResult : uint8 {
    Success,
    Failed_StartingPointNotFound,
    Failed_EndPointNotFound,
    Failed_PointsNotConnected,
    Failed_UsedTooManyNodes,
    Failed_NotReady,
    Failed_UnknownError,
};

