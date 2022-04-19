#pragma once
#include "CoreMinimal.h"
#include "EKeyBindingAxis.generated.h"

UENUM(BlueprintType)
enum class EKeyBindingAxis : uint8 {
    None,
    Positive,
    Negative,
};

