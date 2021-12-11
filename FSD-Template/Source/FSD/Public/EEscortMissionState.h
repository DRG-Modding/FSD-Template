#pragma once
#include "CoreMinimal.h"
#include "EEscortMissionState.generated.h"

UENUM(BlueprintType)
enum class EEscortMissionState : uint8 {
    Stationary,
    Moving,
    WaitingForFuel,
    FinalEvent,
    Finished,
    ShellCracked,
    VehicleDead,
    InGarage,
};

