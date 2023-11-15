#include "CoilgunUpgrade.h"
#include "Templates/SubclassOf.h"

UCoilgunUpgrade::UCoilgunUpgrade() {
    this->upgradeType = ECoilgunUpgrades::EResistanceWhileCharging;
}

FUpgradeValues UCoilgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECoilgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


