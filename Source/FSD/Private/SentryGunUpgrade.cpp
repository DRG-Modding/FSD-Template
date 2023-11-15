#include "SentryGunUpgrade.h"
#include "Templates/SubclassOf.h"

USentryGunUpgrade::USentryGunUpgrade() {
    this->upgradeType = ESentryGunUpgradeType::MaxAmmo;
}

FUpgradeValues USentryGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESentryGunUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


