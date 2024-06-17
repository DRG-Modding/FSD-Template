#pragma once
#include "CoreMinimal.h"
#include "EDeepScanState.generated.h"

UENUM(BlueprintType)
enum class EDeepScanState : uint8 {
    FindItems,
    WaitForElevator,
    StartElevator,
    RideElevator,
    GatherResources,
    ReturnToPod,
};

