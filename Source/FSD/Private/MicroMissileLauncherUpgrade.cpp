#include "MicroMissileLauncherUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UMicroMissileLauncherUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicroMissileLauncherUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UMicroMissileLauncherUpgrade::UMicroMissileLauncherUpgrade() {
    this->upgradeType = EMicroMissileLauncherUpgrades::ChargeFire;
}

