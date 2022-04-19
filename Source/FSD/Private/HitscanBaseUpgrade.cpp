#include "HitscanBaseUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UHitscanBaseUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHitScanBaseUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UHitscanBaseUpgrade::UHitscanBaseUpgrade() {
    this->upgradeType = EHitScanBaseUpgradeType::MaxVerticalSpread;
}

