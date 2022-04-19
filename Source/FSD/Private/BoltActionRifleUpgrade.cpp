#include "BoltActionRifleUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UBoltActionRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBoltActionRifleUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBoltActionRifleUpgrade::UBoltActionRifleUpgrade() {
    this->upgradeType = EBoltActionRifleUpgrades::FocusSpeed;
}

