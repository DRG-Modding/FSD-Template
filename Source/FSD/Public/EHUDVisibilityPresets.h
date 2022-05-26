#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityPresets.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibilityPresets : uint8 {
    AllVisible,
    Recommended,
    Minimal,
    AllHidden,
};

