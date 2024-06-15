#pragma once
#include "CoreMinimal.h"
#include "ERefinerySecondaryState.generated.h"

UENUM(BlueprintType)
enum class ERefinerySecondaryState : uint8 {
    Started,
    WellCalled,
    PipeConnected,
    PipeConstructed,
    Extracting,
    Complete,
};

