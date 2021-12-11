#pragma once
#include "CoreMinimal.h"
#include "EUseRestriction.generated.h"

UENUM(BlueprintType)
enum class EUseRestriction : uint8 {
    Free,
    StrictOnly,
    DepositOnly,
    Repair,
    Zipline,
    BlockAll,
    PickupItem,
};

