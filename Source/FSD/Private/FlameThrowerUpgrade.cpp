#include "FlameThrowerUpgrade.h"
#include "Templates/SubclassOf.h"

UFlameThrowerUpgrade::UFlameThrowerUpgrade() {
    this->upgradeType = EFlameThrowerUpgradeType::StickyFlameDuration;
}

FUpgradeValues UFlameThrowerUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EFlameThrowerUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


