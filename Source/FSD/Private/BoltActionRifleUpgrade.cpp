#include "BoltActionRifleUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UBoltActionRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBoltActionRifleUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBoltActionRifleUpgrade::UBoltActionRifleUpgrade() {
    this->upgradeType = EBoltActionRifleUpgrades::FocusSpeed;
}

