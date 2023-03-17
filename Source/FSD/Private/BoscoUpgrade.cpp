#include "BoscoUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UBoscoUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EBoscoUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBoscoUpgrade::UBoscoUpgrade() {
    this->upgradeType = EBoscoUpgrades::MiningSpeedUpgrade;
}

