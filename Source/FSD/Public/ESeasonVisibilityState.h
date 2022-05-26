#pragma once
#include "CoreMinimal.h"
#include "ESeasonVisibilityState.generated.h"

UENUM(BlueprintType)
enum class ESeasonVisibilityState : uint8 {
    Bought,
    CanBuy,
    Locked,
};

