#pragma once
#include "CoreMinimal.h"
#include "EPathfinderResult.generated.h"

UENUM()
enum class EPathfinderResult {
    Success,
    Failed_StartingPointNotFound,
    Failed_EndPointNotFound,
    Failed_PointsNotConnected,
    Failed_UsedTooManyNodes,
    Failed_NotReady,
    Failed_UnknownError,
};

