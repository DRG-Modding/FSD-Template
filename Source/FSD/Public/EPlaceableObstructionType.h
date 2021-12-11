#pragma once
#include "CoreMinimal.h"
#include "EPlaceableObstructionType.generated.h"

UENUM(BlueprintType)
enum class EPlaceableObstructionType : uint8 {
    Valid,
    GroundTooSteep,
    TooShort,
    TooLong,
    TurnTooSharp,
    Blocked,
    NotEnoughRoom,
    TooSteep,
    Other,
};

