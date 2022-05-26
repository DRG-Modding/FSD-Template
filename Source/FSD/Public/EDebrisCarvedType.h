#pragma once
#include "CoreMinimal.h"
#include "EDebrisCarvedType.generated.h"

UENUM(BlueprintType)
enum class EDebrisCarvedType : uint8 {
    Large,
    Small,
    LevelGeneration,
    Resources,
};

