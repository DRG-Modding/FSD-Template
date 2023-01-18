#include "SentryGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues USentryGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ESentryGunUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

USentryGunUpgrade::USentryGunUpgrade() {
    this->upgradeType = ESentryGunUpgradeType::MaxAmmo;
}

