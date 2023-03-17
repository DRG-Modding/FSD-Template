#include "PickaxeUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UPickaxeUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPickaxeUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UPickaxeUpgrade::UPickaxeUpgrade() {
    this->upgradeType = EPickaxeUpgradeType::RockMining;
}

