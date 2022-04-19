#include "CapsuleHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UCapsuleHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECapsuleHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UCapsuleHitscanUpgrade::UCapsuleHitscanUpgrade() {
    this->upgradeType = ECapsuleHitscanUpgradeType::ShotWidth;
}

