#pragma once
#include "CoreMinimal.h"
#include "ECrossbowStuckType.generated.h"

UENUM()
enum class ECrossbowStuckType : uint8 {
    Default,
    Electric,
    Chemical,
    Banshee,
};

