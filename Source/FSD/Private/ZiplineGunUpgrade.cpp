#include "ZiplineGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UZiplineGunUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UZiplineGunUpgrade::UZiplineGunUpgrade() {
    this->upgradeType = EZiplineGunUpgrades::MaxAngle;
    this->ProjectileClass = NULL;
}

