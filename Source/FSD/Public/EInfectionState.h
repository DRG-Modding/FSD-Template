#pragma once
#include "CoreMinimal.h"
#include "EInfectionState.generated.h"

UENUM(BlueprintType)
enum class EInfectionState : uint8 {
    Normal,
    PartlyInfected,
    FullyInfected,
};

