#pragma once
#include "CoreMinimal.h"
#include "EPatrolBotState.generated.h"

UENUM(BlueprintType)
enum class EPatrolBotState : uint8 {
    Rolling,
    Flying,
    Disabled,
};

