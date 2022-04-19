#pragma once
#include "CoreMinimal.h"
#include "EHeadVanityType.generated.h"

UENUM(BlueprintType)
enum class EHeadVanityType : uint8 {
    HairOnly,
    HeadGearOnly,
    HeadGearOnly_UseArmorMaterial,
    HairAndHeadGear,
    HairAndHeadGear_UseArmorMaterial,
};

