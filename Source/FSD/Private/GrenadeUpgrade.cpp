#include "GrenadeUpgrade.h"
#include "Templates/SubclassOf.h"

UGrenadeUpgrade::UGrenadeUpgrade() {
    this->upgradeType = EGrenadeUpgradeType::MaxGrenades;
}

FUpgradeValues UGrenadeUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AGrenade> flareClass, EGrenadeUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


