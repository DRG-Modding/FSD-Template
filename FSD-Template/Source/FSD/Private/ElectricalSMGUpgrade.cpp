#include "ElectricalSMGUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UElectricalSMGUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EElectricalSMGUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UElectricalSMGUpgrade::UElectricalSMGUpgrade() {
    this->upgradeType = EElectricalSMGUpgrades::AoEChance;
}

