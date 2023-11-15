#include "DualMachinePistolsUpgrade.h"
#include "Templates/SubclassOf.h"

UDualMachinePistolsUpgrade::UDualMachinePistolsUpgrade() {
    this->upgradeType = EDualMachinePistolsUpgrades::TriggerStatusEffectOnEmptyClip;
}

FUpgradeValues UDualMachinePistolsUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDualMachinePistolsUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


