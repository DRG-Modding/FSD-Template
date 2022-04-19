#include "BeltDrivenWeaponUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UBeltDrivenWeaponUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UBeltDrivenWeaponUpgrade::UBeltDrivenWeaponUpgrade() {
    this->upgradeType = EBeltDrivenWeaponUpgrade::BarrelSpinupTime;
}

