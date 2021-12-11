#pragma once
#include "CoreMinimal.h"
#include "EFlareUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EFlareUpgradeType : uint8 {
    Duration,
    MaxFlares,
    ProductionTime,
};

