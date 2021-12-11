#pragma once
#include "CoreMinimal.h"
#include "ECharselectionCameraLocation.generated.h"

UENUM()
enum class ECharselectionCameraLocation : uint8 {
    Selection,
    Customization,
    Crafting,
    ViewWeapon,
    EndScreen,
    Forge,
    Pickaxe,
};

