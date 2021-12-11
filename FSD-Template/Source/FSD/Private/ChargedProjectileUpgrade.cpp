#include "ChargedProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;
class AActor;

FUpgradeValues UChargedProjectileUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, AFSDPlayerState* Player, EChargedProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UChargedProjectileUpgrade::UChargedProjectileUpgrade() {
    this->upgradeType = EChargedProjectileUpgrades::ExplodesOnDamage;
    this->projectileClass = NULL;
}

