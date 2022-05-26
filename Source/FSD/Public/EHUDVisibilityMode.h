#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibilityMode : uint8 {
    Visible,
    Dynamic,
    Hidden,
};

