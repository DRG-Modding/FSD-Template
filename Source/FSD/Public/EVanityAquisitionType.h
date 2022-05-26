#pragma once
#include "CoreMinimal.h"
#include "EVanityAquisitionType.generated.h"

UENUM(BlueprintType)
enum class EVanityAquisitionType : uint8 {
    UnlockedFromStart,
    Purchased,
    Schematic,
    Treasure,
};

