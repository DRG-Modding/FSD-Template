#include "HitscanBaseUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UHitscanBaseUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHitScanBaseUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UHitscanBaseUpgrade::UHitscanBaseUpgrade() {
    this->upgradeType = EHitScanBaseUpgradeType::MaxVerticalSpread;
}

