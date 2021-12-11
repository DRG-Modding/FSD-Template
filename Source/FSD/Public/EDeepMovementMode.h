#pragma once
#include "CoreMinimal.h"
#include "EDeepMovementMode.generated.h"

UENUM()
enum class EDeepMovementMode : uint8 {
    Normal,
    Flee,
    Fly,
    BackOff,
};

