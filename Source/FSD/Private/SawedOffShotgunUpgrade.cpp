#include "SawedOffShotgunUpgrade.h"
#include "Templates/SubclassOf.h"

USawedOffShotgunUpgrade::USawedOffShotgunUpgrade() {
    this->upgradeType = ESawedOffShotgunUpgrades::FearOnShoot;
}

FUpgradeValues USawedOffShotgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESawedOffShotgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


