#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderPreference.generated.h"

UENUM()
enum class DeepPathFinderPreference : uint8 {
    None,
    Floor,
    Walls,
    Ceiling,
};

