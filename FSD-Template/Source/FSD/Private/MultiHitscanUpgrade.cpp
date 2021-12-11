#include "MultiHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UMultiHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMultiHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UMultiHitscanUpgrade::UMultiHitscanUpgrade() {
    this->upgradeType = EMultiHitscanUpgradeType::BulletsPerShot;
}

