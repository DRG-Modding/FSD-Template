#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderType.generated.h"

UENUM(BlueprintType)
enum class DeepPathFinderType : uint8 {
    Walk,
    Fly,
    MAX,
};

