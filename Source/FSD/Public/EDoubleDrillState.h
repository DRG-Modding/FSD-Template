#pragma once
#include "CoreMinimal.h"
#include "EDoubleDrillState.generated.h"

UENUM(BlueprintType)
enum class EDoubleDrillState : uint8 {
    Equipping,
    Idle,
    Mining,
    Overheated,
    OutOfFuel,
};

