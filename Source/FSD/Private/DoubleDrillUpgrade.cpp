#include "DoubleDrillUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UDoubleDrillUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDoubleDrillUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UDoubleDrillUpgrade::UDoubleDrillUpgrade() {
    this->upgradeType = EDoubleDrillUpgradeType::MiningRate;
}

