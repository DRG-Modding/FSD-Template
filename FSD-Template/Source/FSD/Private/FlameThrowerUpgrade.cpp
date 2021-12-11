#include "FlameThrowerUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UFlameThrowerUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EFlameThrowerUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UFlameThrowerUpgrade::UFlameThrowerUpgrade() {
    this->upgradeType = EFlameThrowerUpgradeType::StickyFlameDuration;
}

