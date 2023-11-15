#include "BeltDrivenWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

UBeltDrivenWeaponUpgrade::UBeltDrivenWeaponUpgrade() {
    this->upgradeType = EBeltDrivenWeaponUpgrade::BarrelSpinupTime;
}

FUpgradeValues UBeltDrivenWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


