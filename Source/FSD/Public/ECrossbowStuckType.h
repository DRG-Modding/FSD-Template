#pragma once
#include "CoreMinimal.h"
#include "ECrossbowStuckType.generated.h"

UENUM(BlueprintType)
enum class ECrossbowStuckType : uint8 {
    Default,
    Electric,
    Chemical,
    Banshee,
};

