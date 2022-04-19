#include "LockOnWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues ULockOnWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ELockOnWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

ULockOnWeaponUpgrade::ULockOnWeaponUpgrade() {
    this->upgradeType = ELockOnWeaponUpgrades::MaxLockOnDegree;
}

