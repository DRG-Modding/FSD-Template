#include "ZiplineGunUpgrade.h"
#include "Templates/SubclassOf.h"

UZiplineGunUpgrade::UZiplineGunUpgrade() {
    this->upgradeType = EZiplineGunUpgrades::MaxAngle;
    this->ProjectileClass = NULL;
}

FUpgradeValues UZiplineGunUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


