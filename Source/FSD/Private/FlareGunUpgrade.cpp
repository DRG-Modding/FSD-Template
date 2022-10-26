#include "FlareGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UFlareGunUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, EFlaregunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UFlareGunUpgrade::UFlareGunUpgrade() {
    this->upgradeType = EFlaregunUpgrades::AutoReload;
}

