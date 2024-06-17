#pragma once
#include "CoreMinimal.h"
#include "EOmmoranStage.generated.h"

UENUM(BlueprintType)
enum class EOmmoranStage : uint8 {
    StartEnemyWave,
    BigEnemyWave,
    FlyingRocks,
    LazerClaws,
    CrystalTraps,
};

