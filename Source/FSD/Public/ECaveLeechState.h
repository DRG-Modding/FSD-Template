#pragma once
#include "CoreMinimal.h"
#include "ECaveLeechState.generated.h"

UENUM(BlueprintType)
enum class ECaveLeechState : uint8 {
    Idle,
    Tracking,
    Pulling,
    Retracting,
    Dying,
    Dead,
    Frozen,
};

