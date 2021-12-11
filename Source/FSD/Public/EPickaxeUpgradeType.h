#pragma once
#include "CoreMinimal.h"
#include "EPickaxeUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EPickaxeUpgradeType : uint8 {
    RockMining,
    OneHitMineralMining,
    ReceiveBonusMineralNitra,
    ReceiveBonusMineralGold,
    EnablePowerAttack,
    PowerAttackCoolDown,
};

