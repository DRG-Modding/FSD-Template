#include "LineCutterProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

ULineCutterProjectileUpgrade::ULineCutterProjectileUpgrade() {
    this->upgradeType = ELineCutterProjectileUpgradeType::LineSize;
}

FUpgradeValues ULineCutterProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterProjectileUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


