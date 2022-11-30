#include "DetPackUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UDetPackUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, EDetPackUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UDetPackUpgrade::UDetPackUpgrade() {
    this->upgradeType = EDetPackUpgrades::CanPickUp;
}

