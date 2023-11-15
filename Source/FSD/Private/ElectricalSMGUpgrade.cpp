#include "ElectricalSMGUpgrade.h"
#include "Templates/SubclassOf.h"

UElectricalSMGUpgrade::UElectricalSMGUpgrade() {
    this->upgradeType = EElectricalSMGUpgrades::AoEChance;
}

FUpgradeValues UElectricalSMGUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EElectricalSMGUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


