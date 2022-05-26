#pragma once
#include "CoreMinimal.h"
#include "EDeepMovementState.generated.h"

UENUM(BlueprintType)
enum class EDeepMovementState : uint8 {
    Stationary,
    Controlled,
    Moving,
    WaitingForPath,
    AttackStance,
    FakePhysics,
};

