#include "FlaregunProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UFlaregunProjectileUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EFlaregunProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UFlaregunProjectileUpgrade::UFlaregunProjectileUpgrade() {
    this->upgradeType = EFlaregunProjectileUpgrades::Duration;
    this->ProjectileClass = NULL;
}

