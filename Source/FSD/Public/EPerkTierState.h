#pragma once
#include "CoreMinimal.h"
#include "EPerkTierState.generated.h"

UENUM(BlueprintType)
enum class EPerkTierState : uint8 {
    Claimable,
    Claimed,
    Locked,
    Unaffordable,
    NotAvailable,
};

