#include "MultiHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UMultiHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMultiHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UMultiHitscanUpgrade::UMultiHitscanUpgrade() {
    this->upgradeType = EMultiHitscanUpgradeType::BulletsPerShot;
}

