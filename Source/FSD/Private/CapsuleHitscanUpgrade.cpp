#include "CapsuleHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

UCapsuleHitscanUpgrade::UCapsuleHitscanUpgrade() {
    this->upgradeType = ECapsuleHitscanUpgradeType::ShotWidth;
}

FUpgradeValues UCapsuleHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECapsuleHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


