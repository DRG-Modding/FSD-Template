#include "HitscanBaseUpgrade.h"
#include "Templates/SubclassOf.h"

UHitscanBaseUpgrade::UHitscanBaseUpgrade() {
    this->upgradeType = EHitScanBaseUpgradeType::MaxVerticalSpread;
}

FUpgradeValues UHitscanBaseUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHitScanBaseUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


