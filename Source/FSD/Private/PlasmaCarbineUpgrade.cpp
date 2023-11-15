#include "PlasmaCarbineUpgrade.h"
#include "Templates/SubclassOf.h"

UPlasmaCarbineUpgrade::UPlasmaCarbineUpgrade() {
    this->upgradeType = EPlasmaCarbineUpgrades::RateOfFireBoostOnFullShield;
}

FUpgradeValues UPlasmaCarbineUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPlasmaCarbineUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


