#include "DetPackUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UDetPackUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, EDetPackUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UDetPackUpgrade::UDetPackUpgrade() {
    this->upgradeType = EDetPackUpgrades::CanPickUp;
}

