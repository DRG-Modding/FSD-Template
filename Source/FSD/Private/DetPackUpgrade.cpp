#include "DetPackUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UDetPackUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, EDetPackUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UDetPackUpgrade::UDetPackUpgrade() {
    this->upgradeType = EDetPackUpgrades::CanPickUp;
}

