#include "BeltDrivenWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UBeltDrivenWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UBeltDrivenWeaponUpgrade::UBeltDrivenWeaponUpgrade() {
    this->upgradeType = EBeltDrivenWeaponUpgrade::BarrelSpinupTime;
}

