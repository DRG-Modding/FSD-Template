#pragma once
#include "CoreMinimal.h"
#include "EDroneActions.generated.h"

UENUM(BlueprintType)
enum class EDroneActions : uint8 {
    Wandering,
    Mining,
    Fighting,
    Lighting,
    Reviving,
};

