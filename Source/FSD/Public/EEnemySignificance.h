#pragma once
#include "CoreMinimal.h"
#include "EEnemySignificance.generated.h"

UENUM()
enum class EEnemySignificance : uint8 {
    Swarmer,
    Normal,
    Critical,
    Critter,
};

