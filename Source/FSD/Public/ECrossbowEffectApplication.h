#pragma once
#include "CoreMinimal.h"
#include "ECrossbowEffectApplication.generated.h"

UENUM(BlueprintType)
enum class ECrossbowEffectApplication : uint8 {
    ToDefault,
    ToSpecial,
    ToAll,
};

