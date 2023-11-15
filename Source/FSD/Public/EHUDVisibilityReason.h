#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityReason.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibilityReason : uint8 {
    Invalid,
    UserChoice,
    StandDown,
    MenuActive = 4,
    Photography = 8,
};

