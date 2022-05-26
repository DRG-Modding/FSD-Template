#pragma once
#include "CoreMinimal.h"
#include "EArmorDamageType.generated.h"

UENUM(BlueprintType)
enum class EArmorDamageType : uint8 {
    Normal,
    Dissolve,
    Beam,
};

