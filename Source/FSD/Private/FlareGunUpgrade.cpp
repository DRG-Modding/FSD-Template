#include "FlareGunUpgrade.h"
#include "Templates/SubclassOf.h"

UFlareGunUpgrade::UFlareGunUpgrade() {
    this->upgradeType = EFlaregunUpgrades::AutoReload;
}

FUpgradeValues UFlareGunUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, EFlaregunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


