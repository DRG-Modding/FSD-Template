#pragma once
#include "CoreMinimal.h"
#include "ETerminatorShoutState.generated.h"

UENUM()
enum class ETerminatorShoutState : uint8 {
    EIdle,
    EGrabbing,
    EDeath,
    EAttacking,
};

