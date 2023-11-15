#include "LineCutterUpgrade.h"
#include "Templates/SubclassOf.h"

ULineCutterUpgrade::ULineCutterUpgrade() {
    this->upgradeType = ELineCutterUpgradeType::ReverseDirection;
}

FUpgradeValues ULineCutterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


