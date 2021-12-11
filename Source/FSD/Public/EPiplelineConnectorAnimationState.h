#pragma once
#include "CoreMinimal.h"
#include "EPiplelineConnectorAnimationState.generated.h"

UENUM()
enum class EPiplelineConnectorAnimationState {
    Unassembled,
    Assembling,
    Assembled,
};

