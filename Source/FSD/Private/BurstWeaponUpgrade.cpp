#include "BurstWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

UBurstWeaponUpgrade::UBurstWeaponUpgrade() {
    this->upgradeType = EBurstWeaponUpgrades::FullBurstHitBonusDamage;
}

FUpgradeValues UBurstWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBurstWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


