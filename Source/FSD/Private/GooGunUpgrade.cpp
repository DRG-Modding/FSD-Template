#include "GooGunUpgrade.h"
#include "Templates/SubclassOf.h"

UGooGunUpgrade::UGooGunUpgrade() {
    this->upgradeType = EGooGunUpgrades::ChargeFire;
}

FUpgradeValues UGooGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGooGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


