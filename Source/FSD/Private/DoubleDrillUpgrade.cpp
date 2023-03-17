#include "DoubleDrillUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UDoubleDrillUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDoubleDrillUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UDoubleDrillUpgrade::UDoubleDrillUpgrade() {
    this->upgradeType = EDoubleDrillUpgradeType::MiningRate;
}

