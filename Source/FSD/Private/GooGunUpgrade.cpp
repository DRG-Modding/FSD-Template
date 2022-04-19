#include "GooGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UGooGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGooGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UGooGunUpgrade::UGooGunUpgrade() {
    this->upgradeType = EGooGunUpgrades::ChargeFire;
}

