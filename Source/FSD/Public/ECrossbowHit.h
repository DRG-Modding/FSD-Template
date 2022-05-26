#pragma once
#include "CoreMinimal.h"
#include "ECrossbowHit.generated.h"

UENUM(BlueprintType)
enum class ECrossbowHit : uint8 {
    InvalidHit,
    OldHit,
    NewHit,
};

