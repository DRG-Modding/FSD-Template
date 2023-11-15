#include "GatlingGunUpgrade.h"
#include "Templates/SubclassOf.h"

UGatlingGunUpgrade::UGatlingGunUpgrade() {
    this->upgradeType = EGatlingGunUpgrade::DamageMultiplierAtMaxStabilization;
}

FUpgradeValues UGatlingGunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGatlingGunUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


