#pragma once
#include "CoreMinimal.h"
#include "ECrossbowUpgrades.generated.h"

UENUM(BlueprintType)
enum class ECrossbowUpgrades : uint8 {
    SpecialArrowPheramone,
    SpecialArrowTaser,
    SpecialArrowChemical,
    BansheeModule,
    Magnetic,
    RadioModule,
    Ricochet,
    VelocityChange,
    DamageDefault,
    RadialDamageDefault,
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

