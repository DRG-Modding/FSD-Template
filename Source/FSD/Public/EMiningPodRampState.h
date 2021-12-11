#pragma once
#include "CoreMinimal.h"
#include "EMiningPodRampState.generated.h"

UENUM(BlueprintType)
enum class EMiningPodRampState : uint8 {
    Closed,
    Opening,
    Open,
    Closing,
};

