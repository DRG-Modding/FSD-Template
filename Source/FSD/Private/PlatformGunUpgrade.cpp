#include "PlatformGunUpgrade.h"
#include "Templates/SubclassOf.h"

UPlatformGunUpgrade::UPlatformGunUpgrade() {
    this->myUpgradeType = EPlatformGunUpgrades::BiggerPlatform;
}

FUpgradeValues UPlatformGunUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EPlatformGunUpgrades aUpgradeType) {
    return FUpgradeValues{};
}


