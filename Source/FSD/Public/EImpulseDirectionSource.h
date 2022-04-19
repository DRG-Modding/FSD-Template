#pragma once
#include "CoreMinimal.h"
#include "EImpulseDirectionSource.generated.h"

UENUM(BlueprintType)
enum class EImpulseDirectionSource : uint8 {
    SourceForward,
    SourceToTarget,
    PlayerToTarget,
    TargetUp,
    TargetRandomOnPlane,
};

