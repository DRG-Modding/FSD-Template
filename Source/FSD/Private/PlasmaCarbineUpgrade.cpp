#include "PlasmaCarbineUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UPlasmaCarbineUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPlasmaCarbineUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UPlasmaCarbineUpgrade::UPlasmaCarbineUpgrade() {
    this->upgradeType = EPlasmaCarbineUpgrades::RateOfFireBoostOnFullShield;
}

