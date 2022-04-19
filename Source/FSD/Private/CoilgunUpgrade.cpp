#include "CoilgunUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UCoilgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECoilgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UCoilgunUpgrade::UCoilgunUpgrade() {
    this->upgradeType = ECoilgunUpgrades::EResistanceWhileCharging;
}

