#include "DualMachinePistolsUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UDualMachinePistolsUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDualMachinePistolsUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UDualMachinePistolsUpgrade::UDualMachinePistolsUpgrade() {
    this->upgradeType = EDualMachinePistolsUpgrades::TriggerStatusEffectOnEmptyClip;
}

