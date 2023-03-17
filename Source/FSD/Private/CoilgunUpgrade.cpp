#include "CoilgunUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UCoilgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECoilgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UCoilgunUpgrade::UCoilgunUpgrade() {
    this->upgradeType = ECoilgunUpgrades::EResistanceWhileCharging;
}

