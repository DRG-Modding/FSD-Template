#pragma once
#include "CoreMinimal.h"
#include "ESeasonVisibilityState.generated.h"

UENUM()
enum class ESeasonVisibilityState {
    Bought,
    CanBuy,
    Locked,
};

