#include "BoltActionRifleUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UBoltActionRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBoltActionRifleUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBoltActionRifleUpgrade::UBoltActionRifleUpgrade() {
    this->upgradeType = EBoltActionRifleUpgrades::FocusSpeed;
}

