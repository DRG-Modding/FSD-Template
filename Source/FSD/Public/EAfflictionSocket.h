#pragma once
#include "CoreMinimal.h"
#include "EAfflictionSocket.generated.h"

UENUM(BlueprintType)
enum class EAfflictionSocket : uint8 {
    CenterMass,
    Feet,
    Camera,
};

