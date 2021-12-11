#pragma once
#include "CoreMinimal.h"
#include "EDetPackUpgrades.generated.h"

UENUM(BlueprintType)
enum class EDetPackUpgrades : uint8 {
    CanPickUp,
    CarveDiameter,
    ExplodeOnDeath,
    ExtraFearRadius,
    ExtraStaggerRadius,
};

