#pragma once
#include "CoreMinimal.h"
#include "ECrossbowUpgrades.generated.h"

UENUM()
enum class ECrossbowUpgrades : uint8 {
    SpecialArrowPheramone,
    SpecialArrowTaser,
    SpecialArrowChemical,
    BansheeModule,
    Magnetic,
    RadioModule,
    Ricochet,
    VelocityChange,
    Trifork,
    Pentafork,
    BattleFrenzy,
    IncreaseSpecialAmmo,
    IncreaseSpecialAmmoPercent,
    SuperFast,
    IncreaseSpecialEffectDuration,
    FasterSwitch,
    CryoArrow,
    FireArrow,
    ReloadTimeDefaultArrow,
    RateOfFireDefaultArrow,
};

