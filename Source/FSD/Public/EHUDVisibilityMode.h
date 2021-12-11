#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityMode.generated.h"

UENUM()
enum class EHUDVisibilityMode : uint8 {
    Visible,
    Dynamic,
    Hidden,
};

