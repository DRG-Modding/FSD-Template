#pragma once
#include "CoreMinimal.h"
#include "EDashPointsGenerationMode.generated.h"

UENUM(BlueprintType)
enum class EDashPointsGenerationMode : uint8 {
    Surround,
    Forward,
};

