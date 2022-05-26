#pragma once
#include "CoreMinimal.h"
#include "EVanitySlot.generated.h"

UENUM(BlueprintType)
enum class EVanitySlot : uint8 {
    Head,
    Beard,
    Armor,
    BeardColor,
    SkinColor,
    Moustache,
    Eyebrows,
    Sideburns,
    ArmorMaterial,
    Count,
};

