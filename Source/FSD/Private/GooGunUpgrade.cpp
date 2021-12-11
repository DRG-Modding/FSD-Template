#include "GooGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UGooGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGooGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UGooGunUpgrade::UGooGunUpgrade() {
    this->upgradeType = EGooGunUpgrades::ChargeFire;
}

