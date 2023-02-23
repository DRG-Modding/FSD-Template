#pragma once
#include "CoreMinimal.h"
#include "EDroppableOutpostState.generated.h"

UENUM(BlueprintType)
enum class EDroppableOutpostState : uint8 {
    WaitingToDrop,
    Drilling,
    Landed,
    PrepTakeoff,
    Departing,
};

