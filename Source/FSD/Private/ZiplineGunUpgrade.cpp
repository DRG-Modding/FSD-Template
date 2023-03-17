#include "ZiplineGunUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UZiplineGunUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UZiplineGunUpgrade::UZiplineGunUpgrade() {
    this->upgradeType = EZiplineGunUpgrades::MaxAngle;
    this->ProjectileClass = NULL;
}

