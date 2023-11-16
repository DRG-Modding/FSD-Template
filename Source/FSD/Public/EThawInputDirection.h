#pragma once
#include "CoreMinimal.h"
#include "EThawInputDirection.generated.h"

UENUM(BlueprintType)
enum class EThawInputDirection : uint8 {
    EForward,
    ERight,
    EBack,
    ELeft,
    ENA,
};

