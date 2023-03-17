#include "PlasmaCarbineUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UPlasmaCarbineUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPlasmaCarbineUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UPlasmaCarbineUpgrade::UPlasmaCarbineUpgrade() {
    this->upgradeType = EPlasmaCarbineUpgrades::RateOfFireBoostOnFullShield;
}

