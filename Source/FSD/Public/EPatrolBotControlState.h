#pragma once
#include "CoreMinimal.h"
#include "EPatrolBotControlState.generated.h"

UENUM(BlueprintType)
enum class EPatrolBotControlState : uint8 {
    Hostile,
    Disabled,
    Hacked,
};

