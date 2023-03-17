#include "SawedOffShotgunUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues USawedOffShotgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESawedOffShotgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

USawedOffShotgunUpgrade::USawedOffShotgunUpgrade() {
    this->upgradeType = ESawedOffShotgunUpgrades::FearOnShoot;
}

