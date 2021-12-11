#include "BurstWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UBurstWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBurstWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UBurstWeaponUpgrade::UBurstWeaponUpgrade() {
    this->upgradeType = EBurstWeaponUpgrades::FullBurstHitBonusDamage;
}

