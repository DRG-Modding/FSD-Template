#include "AmmoDrivenWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UAmmoDrivenWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UAmmoDrivenWeaponUpgrade::UAmmoDrivenWeaponUpgrade() {
    this->upgradeType = EAmmoDrivenWeapnUpgradeType::MaxAmmo;
}

