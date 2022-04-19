#pragma once
#include "CoreMinimal.h"
#include "EArmorDamageType.generated.h"

UENUM()
enum class EArmorDamageType : uint8 {
    Normal,
    Dissolve,
    Beam,
};

