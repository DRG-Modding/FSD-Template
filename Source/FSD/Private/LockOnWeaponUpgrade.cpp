#include "LockOnWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

ULockOnWeaponUpgrade::ULockOnWeaponUpgrade() {
    this->upgradeType = ELockOnWeaponUpgrades::MaxLockOnDegree;
}

FUpgradeValues ULockOnWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ELockOnWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


