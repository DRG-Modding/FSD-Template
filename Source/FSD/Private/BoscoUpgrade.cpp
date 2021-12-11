#include "BoscoUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UBoscoUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EBoscoUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBoscoUpgrade::UBoscoUpgrade() {
    this->upgradeType = EBoscoUpgrades::MiningSpeedUpgrade;
}

