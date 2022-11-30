#include "ProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UProjectileUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EProjectileUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UProjectileUpgrade::UProjectileUpgrade() {
    this->upgradeType = EProjectileUpgrade::Velocity;
    this->ProjectileClass = NULL;
    this->Condition = NULL;
}

