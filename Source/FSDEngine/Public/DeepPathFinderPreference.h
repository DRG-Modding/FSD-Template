#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderPreference.generated.h"

UENUM(BlueprintType)
enum class DeepPathFinderPreference : uint8 {
    None,
    Floor,
    Walls,
    Ceiling,
};

