#include "GooGunProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UGooGunProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, EGooGunProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UGooGunProjectileUpgrade::UGooGunProjectileUpgrade() {
    this->upgradeType = EGooGunProjectileUpgrades::PuddleLifeSpan;
}

