#pragma once
#include "CoreMinimal.h"
#include "EEnemyPlacementMask.generated.h"

UENUM(BlueprintType)
enum class EEnemyPlacementMask : uint8 {
    Ground,
    Spawner,
    Cieling,
};

