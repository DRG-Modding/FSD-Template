#pragma once
#include "CoreMinimal.h"
#include "EDropPodState.generated.h"

UENUM(BlueprintType)
enum class EDropPodState : uint8 {
    WaitingToDrop,
    Drilling,
    Landed,
    PrepTakeoff,
    Departing,
};

