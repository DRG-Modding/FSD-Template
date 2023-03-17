#include "GatlingGunUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UGatlingGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGatlingGunUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UGatlingGunUpgrade::UGatlingGunUpgrade() {
    this->upgradeType = EGatlingGunUpgrade::DamageMultiplierAtMaxStabilization;
}

