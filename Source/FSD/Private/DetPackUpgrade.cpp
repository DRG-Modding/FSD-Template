#include "DetPackUpgrade.h"
#include "Templates/SubclassOf.h"

UDetPackUpgrade::UDetPackUpgrade() {
    this->upgradeType = EDetPackUpgrades::CanPickUp;
}

FUpgradeValues UDetPackUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, EDetPackUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


