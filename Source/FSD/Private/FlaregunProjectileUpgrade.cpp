#include "FlaregunProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

UFlaregunProjectileUpgrade::UFlaregunProjectileUpgrade() {
    this->upgradeType = EFlaregunProjectileUpgrades::Duration;
    this->ProjectileClass = NULL;
}

FUpgradeValues UFlaregunProjectileUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EFlaregunProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


