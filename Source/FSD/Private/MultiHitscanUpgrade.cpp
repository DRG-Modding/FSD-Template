#include "MultiHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

UMultiHitscanUpgrade::UMultiHitscanUpgrade() {
    this->upgradeType = EMultiHitscanUpgradeType::BulletsPerShot;
}

FUpgradeValues UMultiHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMultiHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


