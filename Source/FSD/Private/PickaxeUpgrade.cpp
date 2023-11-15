#include "PickaxeUpgrade.h"
#include "Templates/SubclassOf.h"

UPickaxeUpgrade::UPickaxeUpgrade() {
    this->upgradeType = EPickaxeUpgradeType::RockMining;
}

FUpgradeValues UPickaxeUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPickaxeUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


