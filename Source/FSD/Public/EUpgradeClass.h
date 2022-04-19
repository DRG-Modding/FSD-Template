#pragma once
#include "CoreMinimal.h"
#include "EUpgradeClass.generated.h"

UENUM(BlueprintType)
enum class EUpgradeClass : uint8 {
    Class_A,
    Class_B,
    Gear_A,
    Gear_B,
    Armor,
    Pickaxe,
    Class_Bosco = 0xA,
};

