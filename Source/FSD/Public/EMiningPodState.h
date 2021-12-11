#pragma once
#include "CoreMinimal.h"
#include "EMiningPodState.generated.h"

UENUM(BlueprintType)
enum class EMiningPodState : uint8 {
    Dropping,
    Drilling,
    Landed,
    PrepTakeoff,
    Departing,
    WaitingForGameStart,
    InSpace,
    Destroy,
    WaitOnSpacerig,
    ExitSpacerig,
    Damaged,
    PoweringUp,
    PoweredUp,
    DeepDiveDeparture,
};

