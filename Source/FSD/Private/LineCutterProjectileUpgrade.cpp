#include "LineCutterProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues ULineCutterProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterProjectileUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

ULineCutterProjectileUpgrade::ULineCutterProjectileUpgrade() {
    this->upgradeType = ELineCutterProjectileUpgradeType::LineSize;
}

