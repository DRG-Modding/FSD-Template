#include "BurstWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UBurstWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBurstWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBurstWeaponUpgrade::UBurstWeaponUpgrade() {
    this->upgradeType = EBurstWeaponUpgrades::FullBurstHitBonusDamage;
}

