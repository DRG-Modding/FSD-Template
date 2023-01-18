#include "GrenadeUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AGrenade;

FUpgradeValues UGrenadeUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AGrenade> flareClass, EGrenadeUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UGrenadeUpgrade::UGrenadeUpgrade() {
    this->upgradeType = EGrenadeUpgradeType::MaxGrenades;
}

