#include "DoubleDrillUpgrade.h"
#include "Templates/SubclassOf.h"

UDoubleDrillUpgrade::UDoubleDrillUpgrade() {
    this->upgradeType = EDoubleDrillUpgradeType::MiningRate;
}

FUpgradeValues UDoubleDrillUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDoubleDrillUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


