#include "SawedOffShotgunUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues USawedOffShotgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESawedOffShotgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

USawedOffShotgunUpgrade::USawedOffShotgunUpgrade() {
    this->upgradeType = ESawedOffShotgunUpgrades::FearOnShoot;
}

