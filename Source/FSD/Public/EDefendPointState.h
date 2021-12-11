#pragma once
#include "CoreMinimal.h"
#include "EDefendPointState.generated.h"

UENUM(BlueprintType)
enum class EDefendPointState : uint8 {
    Idle,
    Started,
    Completed,
    Failed,
};

