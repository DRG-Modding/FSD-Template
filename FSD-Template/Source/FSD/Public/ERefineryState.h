#pragma once
#include "CoreMinimal.h"
#include "ERefineryState.generated.h"

UENUM(BlueprintType)
enum class ERefineryState : uint8 {
    Landing,
    ConnectingPipes,
    PipesConnected,
    Refining,
    RefiningStalled,
    RefiningComplete,
    RocketLaunched,
};

