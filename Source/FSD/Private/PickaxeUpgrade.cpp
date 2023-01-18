#include "PickaxeUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UPickaxeUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPickaxeUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UPickaxeUpgrade::UPickaxeUpgrade() {
    this->upgradeType = EPickaxeUpgradeType::RockMining;
}

