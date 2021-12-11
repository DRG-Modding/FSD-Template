#pragma once
#include "CoreMinimal.h"
#include "ELineRotation.generated.h"

UENUM(BlueprintType)
enum class ELineRotation : uint8 {
    None,
    Yaw,
    Pitch,
    Roll,
};

