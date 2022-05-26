#pragma once
#include "CoreMinimal.h"
#include "EPerkSlotType.generated.h"

UENUM(BlueprintType)
enum class EPerkSlotType : uint8 {
    Available,
    LockedByPerk,
    LockedByPromotion,
};

