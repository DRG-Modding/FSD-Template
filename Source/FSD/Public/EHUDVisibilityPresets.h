#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityPresets.generated.h"

UENUM()
enum class EHUDVisibilityPresets : uint8 {
    AllVisible,
    Recommended,
    Minimal,
    AllHidden,
};

