#pragma once
#include "CoreMinimal.h"
#include "EDrillevatorState.generated.h"

UENUM(BlueprintType)
enum class EDrillevatorState : uint8 {
    Deactivated,
    Startup,
    HardRockDrilling,
    BrokenDown,
    Finished,
    CrackingGeode,
    EnteringGeode,
    FreeFalling,
};

