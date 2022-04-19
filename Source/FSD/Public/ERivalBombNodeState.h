#pragma once
#include "CoreMinimal.h"
#include "ERivalBombNodeState.generated.h"

UENUM(BlueprintType)
enum class ERivalBombNodeState : uint8 {
    Inactive,
    Active,
    Hackable,
    Completed,
    Failed,
};

