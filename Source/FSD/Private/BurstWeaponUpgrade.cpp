#include "BurstWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UBurstWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBurstWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBurstWeaponUpgrade::UBurstWeaponUpgrade() {
    this->upgradeType = EBurstWeaponUpgrades::FullBurstHitBonusDamage;
}

