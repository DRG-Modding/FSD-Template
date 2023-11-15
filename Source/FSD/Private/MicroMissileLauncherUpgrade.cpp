#include "MicroMissileLauncherUpgrade.h"
#include "Templates/SubclassOf.h"

UMicroMissileLauncherUpgrade::UMicroMissileLauncherUpgrade() {
    this->upgradeType = EMicroMissileLauncherUpgrades::ChargeFire;
}

FUpgradeValues UMicroMissileLauncherUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicroMissileLauncherUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


