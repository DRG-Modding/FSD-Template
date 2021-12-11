#pragma once
#include "CoreMinimal.h"
#include "ECharacterState.generated.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8 {
    Walking,
    Downed,
    Dead,
    Falling,
    Paralyzed,
    Using,
    ZipLine,
    NoMovement,
    Grabbed,
    Flying,
    Frozen,
    PassedOut,
    Photography,
    Piloting,
    Attached,
    Pushing,
    TrackMovement,
    EnemyControl,
    Invalid,
};

