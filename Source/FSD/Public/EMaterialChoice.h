#pragma once
#include "CoreMinimal.h"
#include "EMaterialChoice.generated.h"

UENUM(BlueprintType)
enum class EMaterialChoice : uint8 {
    HairColor,
    TransparentHairColor,
    ArmorColor,
    MaterialOverride,
};

