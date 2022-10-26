#include "PlatformGunUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UPlatformGunUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EPlatformGunUpgrades aUpgradeType) {
    return FUpgradeValues{};
}

UPlatformGunUpgrade::UPlatformGunUpgrade() {
    this->myUpgradeType = EPlatformGunUpgrades::BiggerPlatform;
}

