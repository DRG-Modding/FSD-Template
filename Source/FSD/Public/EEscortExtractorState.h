#pragma once
#include "CoreMinimal.h"
#include "EEscortExtractorState.generated.h"

UENUM(BlueprintType)
enum class EEscortExtractorState : uint8 {
    ReadyToGrab,
    Taken,
    Full,
};

