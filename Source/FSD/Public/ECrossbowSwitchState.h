#pragma once
#include "CoreMinimal.h"
#include "ECrossbowSwitchState.generated.h"

UENUM()
enum class ECrossbowSwitchState : int32 {
    Normal,
    Cancelled,
    DuringReload,
};

