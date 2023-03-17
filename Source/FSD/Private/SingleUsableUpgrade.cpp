#include "SingleUsableUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues USingleUsableUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> subItem, AFSDPlayerState* Player, ESingleUsableUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

USingleUsableUpgrade::USingleUsableUpgrade() {
    this->upgradeType = ESingleUsableUpgradeType::UseDuration;
}

