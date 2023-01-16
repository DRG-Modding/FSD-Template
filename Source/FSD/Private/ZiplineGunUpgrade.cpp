#include "ZiplineGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UZiplineGunUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UZiplineGunUpgrade::UZiplineGunUpgrade() {
    this->upgradeType = EZiplineGunUpgrades::MaxAngle;
    this->ProjectileClass = NULL;
}

