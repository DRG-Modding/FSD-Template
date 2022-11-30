#include "LineCutterProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues ULineCutterProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterProjectileUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

ULineCutterProjectileUpgrade::ULineCutterProjectileUpgrade() {
    this->upgradeType = ELineCutterProjectileUpgradeType::LineSize;
}

