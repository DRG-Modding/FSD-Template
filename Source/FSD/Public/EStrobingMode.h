#pragma once
#include "CoreMinimal.h"
#include "EStrobingMode.generated.h"

UENUM(BlueprintType)
enum class EStrobingMode : uint8 {
    Intensity,
    AttenuationRadius,
};

