#include "CryoSprayUpgrade.h"
#include "Templates/SubclassOf.h"

UCryoSprayUpgrade::UCryoSprayUpgrade() {
    this->upgradeType = ECryoSprayUpgrades::PressureDropMultiplier;
}

FUpgradeValues UCryoSprayUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECryoSprayUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


