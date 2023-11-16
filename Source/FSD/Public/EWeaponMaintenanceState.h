#pragma once
#include "CoreMinimal.h"
#include "EWeaponMaintenanceState.generated.h"

UENUM(BlueprintType)
enum class EWeaponMaintenanceState : uint8 {
    Locked,
    Maintaining,
    LevelUp,
    Finished,
};

