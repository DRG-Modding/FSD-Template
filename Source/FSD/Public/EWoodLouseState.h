#pragma once
#include "CoreMinimal.h"
#include "EWoodLouseState.generated.h"

UENUM(BlueprintType)
enum class EWoodLouseState : uint8 {
    Unfolded,
    Folded,
    Size,
};

