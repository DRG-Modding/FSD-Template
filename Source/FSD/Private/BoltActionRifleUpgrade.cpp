#include "BoltActionRifleUpgrade.h"
#include "Templates/SubclassOf.h"

UBoltActionRifleUpgrade::UBoltActionRifleUpgrade() {
    this->upgradeType = EBoltActionRifleUpgrades::FocusSpeed;
}

FUpgradeValues UBoltActionRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBoltActionRifleUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


