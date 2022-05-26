#pragma once
#include "CoreMinimal.h"
#include "ETreasureType.generated.h"

UENUM(BlueprintType)
enum class ETreasureType : uint8 {
    WeaponSkin,
    VictoryPose,
    PickaxePart,
    VanityItem,
};

