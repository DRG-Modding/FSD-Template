#include "CryoSprayUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UCryoSprayUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECryoSprayUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UCryoSprayUpgrade::UCryoSprayUpgrade() {
    this->upgradeType = ECryoSprayUpgrades::PressureDropMultiplier;
}

