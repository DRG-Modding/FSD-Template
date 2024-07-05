#pragma once
#include "CoreMinimal.h"
#include "EDrillevatorEngineState.generated.h"

UENUM(BlueprintType)
enum class EDrillevatorEngineState : uint8 {
    Off,
    On,
    Running,
    Idle,
    Halted,
    FreeFalling,
    RunningNoDrain,
};

