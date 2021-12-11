#pragma once
#include "CoreMinimal.h"
#include "EProspectorRobotState.generated.h"

UENUM(BlueprintType)
enum class EProspectorRobotState : uint8 {
    Searching,
    Scanning,
    Sampling,
    Fleeing,
};

