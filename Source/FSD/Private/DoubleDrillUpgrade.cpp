#include "DoubleDrillUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UDoubleDrillUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDoubleDrillUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UDoubleDrillUpgrade::UDoubleDrillUpgrade() {
    this->upgradeType = EDoubleDrillUpgradeType::MiningRate;
}

