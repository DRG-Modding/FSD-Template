#pragma once
#include "CoreMinimal.h"
#include "EPerkTierState.generated.h"

UENUM()
enum class EPerkTierState : uint8 {
    Claimable,
    Claimed,
    Locked,
    Unaffordable,
    NotAvailable,
};

