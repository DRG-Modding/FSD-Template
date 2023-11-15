#include "AmmoDrivenWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

UAmmoDrivenWeaponUpgrade::UAmmoDrivenWeaponUpgrade() {
    this->upgradeType = EAmmoDrivenWeapnUpgradeType::MaxAmmo;
}

FUpgradeValues UAmmoDrivenWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


