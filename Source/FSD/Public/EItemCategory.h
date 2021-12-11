#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.generated.h"

UENUM()
enum class EItemCategory : uint8 {
    PrimaryWeapon,
    SecondaryWeapon,
    TraversalTool,
    ClassTool,
    Grenade,
    Flare,
    MiningTool,
    Armor,
};

