#include "SentryGunUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues USentryGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESentryGunUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

USentryGunUpgrade::USentryGunUpgrade() {
    this->upgradeType = ESentryGunUpgradeType::MaxAmmo;
}

