#include "AutoShotgunUpgrade.h"
#include "Templates/SubclassOf.h"

UAutoShotgunUpgrade::UAutoShotgunUpgrade() {
    this->upgradeType = EAutoShotgunUpgrades::TurretSpecialAttackEnabled;
}

FUpgradeValues UAutoShotgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAutoShotgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


