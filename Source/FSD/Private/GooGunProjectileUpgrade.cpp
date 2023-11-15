#include "GooGunProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

UGooGunProjectileUpgrade::UGooGunProjectileUpgrade() {
    this->upgradeType = EGooGunProjectileUpgrades::PuddleLifeSpan;
}

FUpgradeValues UGooGunProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, EGooGunProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


