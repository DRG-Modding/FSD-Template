#pragma once
#include "CoreMinimal.h"
#include "EDeepMovementMode.generated.h"

UENUM(BlueprintType)
enum class EDeepMovementMode : uint8 {
    Normal,
    Flee,
    Fly,
    BackOff,
};

