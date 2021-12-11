#pragma once
#include "CoreMinimal.h"
#include "EDroneActions.generated.h"

UENUM()
enum class EDroneActions : uint8 {
    Wandering,
    Mining,
    Fighting,
    Lighting,
    Reviving,
};

