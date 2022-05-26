#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityReason.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibilityReason : uint8 {
    Invalid,
    UserChoice,
    StandDown,
    MenuActive = 0x4,
    Photography = 0x8,
};

