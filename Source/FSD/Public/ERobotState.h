#pragma once
#include "CoreMinimal.h"
#include "ERobotState.generated.h"

UENUM(BlueprintType)
enum class ERobotState : uint8 {
    Enemy,
    Friendly,
    PoweredDown,
};

