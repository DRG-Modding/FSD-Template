#pragma once
#include "CoreMinimal.h"
#include "EPlayerTemperatureState.generated.h"

UENUM(BlueprintType)
enum class EPlayerTemperatureState : uint8 {
    Normal,
    Frozen,
    Overheated,
};

