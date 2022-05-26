#pragma once
#include "CoreMinimal.h"
#include "ECharselectionCameraLocation.generated.h"

UENUM(BlueprintType)
enum class ECharselectionCameraLocation : uint8 {
    Selection,
    Customization,
    Crafting,
    ViewWeapon,
    EndScreen,
    Forge,
    Pickaxe,
};

