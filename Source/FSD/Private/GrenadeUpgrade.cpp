#include "GrenadeUpgrade.h"
#include "Templates/SubclassOf.h"

class AGrenade;
class AFSDPlayerState;

FUpgradeValues UGrenadeUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AGrenade> flareClass, EGrenadeUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UGrenadeUpgrade::UGrenadeUpgrade() {
    this->upgradeType = EGrenadeUpgradeType::MaxGrenades;
}

