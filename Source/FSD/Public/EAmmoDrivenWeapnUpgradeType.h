#pragma once
#include "CoreMinimal.h"
#include "EAmmoDrivenWeapnUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EAmmoDrivenWeapnUpgradeType : uint8 {
    MaxAmmo,
    ClipSize,
    RateOfFire,
    ReloadSpeed,
    RecoilMultiplier,
    BurstCount,
    BurstRateOfFire,
    ActivateBurstFireMode,
    ActivateAutomaticFireMode,
    HeatUpRateModifier,
    AutoReloadDuration,
    RecoilMass,
    OverheatOnReload,
    ShotCost,
    CustomEvent1,
};

