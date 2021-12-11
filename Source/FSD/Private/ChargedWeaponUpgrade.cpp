#include "ChargedWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UChargedWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EChargedWeaponUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UChargedWeaponUpgrade::UChargedWeaponUpgrade() {
    this->upgradeType = EChargedWeaponUpgrades::ShotCostAtFullCharge;
}

