#include "LineCutterUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues ULineCutterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

ULineCutterUpgrade::ULineCutterUpgrade() {
    this->upgradeType = ELineCutterUpgradeType::ReverseDirection;
}

