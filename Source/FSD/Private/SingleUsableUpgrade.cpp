#include "SingleUsableUpgrade.h"
#include "Templates/SubclassOf.h"

USingleUsableUpgrade::USingleUsableUpgrade() {
    this->upgradeType = ESingleUsableUpgradeType::UseDuration;
}

FUpgradeValues USingleUsableUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> subItem, AFSDPlayerState* Player, ESingleUsableUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


