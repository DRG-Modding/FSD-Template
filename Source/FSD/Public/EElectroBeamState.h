#pragma once
#include "CoreMinimal.h"
#include "EElectroBeamState.generated.h"

UENUM()
enum class EElectroBeamState : int32 {
    NotStarted,
    Recalculating,
    Stopped,
};

