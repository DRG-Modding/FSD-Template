#pragma once
#include "CoreMinimal.h"
#include "EFacilityEye.generated.h"

UENUM(BlueprintType)
enum class EFacilityEye : uint8 {
    EForward,
    EBack,
    ELeft,
    ERight,
};

