#include "SawedOffShotgunUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues USawedOffShotgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESawedOffShotgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

USawedOffShotgunUpgrade::USawedOffShotgunUpgrade() {
    this->upgradeType = ESawedOffShotgunUpgrades::FearOnShoot;
}

