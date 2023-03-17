#include "LockOnWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues ULockOnWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ELockOnWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

ULockOnWeaponUpgrade::ULockOnWeaponUpgrade() {
    this->upgradeType = ELockOnWeaponUpgrades::MaxLockOnDegree;
}

