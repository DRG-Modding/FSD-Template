#pragma once
#include "CoreMinimal.h"
#include "ETemperatureIntensity.generated.h"

UENUM(BlueprintType)
enum class ETemperatureIntensity : uint8 {
    Cold3,
    Cold2,
    Cold1,
    Heat1,
    Heat2,
    Heat3,
};

