#pragma once
#include "CoreMinimal.h"
#include "EPreciousMaterialOptions.generated.h"

UENUM()
enum class EPreciousMaterialOptions : uint8 {
    TurnIntoGems,
    LeaveUntouched,
    Ignore,
};

