#pragma once
#include "CoreMinimal.h"
#include "ECoilgunUpgrades.generated.h"

UENUM(BlueprintType)
enum class ECoilgunUpgrades : uint8 {
    EResistanceWhileCharging,
    ETransferAilment,
    EFlamekills,
    EOvercharge,
    EUnderCharge,
    EWeaponBlast,
    EShotwaveRange,
    EImpactFearFactor,
    EDamageOnShotWave,
    EImpactFearRadius,
    EEffectTrailDuration,
    EEffectTrailBonusRadius,
    EBrokenShieldBonus,
    EPostChargeBurst,
    EOwnerShieldCapacity,
    EBlockShieldWhileCharing,
    EWeaknessWhileCharging,
    EPierceDepthDamage,
    EBurnGround,
    EElectricTrail,
    EFireTrail,
    EPenetrationDepth,
    EPrimaryBonusShotWidth,
    EShieldDelay,
};

