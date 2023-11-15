#include "BoscoUpgrade.h"
#include "Templates/SubclassOf.h"

UBoscoUpgrade::UBoscoUpgrade() {
    this->upgradeType = EBoscoUpgrades::MiningSpeedUpgrade;
}

FUpgradeValues UBoscoUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EBoscoUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


