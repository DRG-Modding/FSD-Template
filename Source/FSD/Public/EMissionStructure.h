#pragma once
#include "CoreMinimal.h"
#include "EMissionStructure.generated.h"

UENUM(BlueprintType)
enum class EMissionStructure : uint8 {
    SingleMission,
    DeepDive_Normal,
    DeepDive_Elite,
};

