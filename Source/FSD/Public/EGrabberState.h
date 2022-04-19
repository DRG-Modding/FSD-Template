#pragma once
#include "CoreMinimal.h"
#include "EGrabberState.generated.h"

UENUM(BlueprintType)
enum class EGrabberState : uint8 {
    StandBy,
    Chase,
    Carry,
    Flee,
};

