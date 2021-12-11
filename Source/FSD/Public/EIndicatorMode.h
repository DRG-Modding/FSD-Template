#pragma once
#include "CoreMinimal.h"
#include "EIndicatorMode.generated.h"

UENUM()
enum class EIndicatorMode : uint8 {
    EConstant,
    EFlashing,
    EOff,
};

