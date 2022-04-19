#pragma once
#include "CoreMinimal.h"
#include "EMicrowaveGunUpgrade.generated.h"

UENUM()
enum class EMicrowaveGunUpgrade : uint8 {
    ESlowOnHit,
    EFocusLense,
    EWideLense,
    ESpreadFire,
    ESpreadNeuro,
    EKilledTargetsExplodeChance,
    ERadiantSuperheater,
    EHeatsink,
    BlisteringNecrosis,
    EGammaContaminationZone,
};

