#pragma once
#include "CoreMinimal.h"
#include "EPiplelineConnectorAnimationState.generated.h"

UENUM(BlueprintType)
enum class EPiplelineConnectorAnimationState : uint8 {
    Unassembled,
    Assembling,
    Assembled,
};

