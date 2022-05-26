#include "CrossbowUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class ACrossbowProjectileBase;
class AFSDPlayerState;

FUpgradeValues UCrossbowUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<ACrossbowProjectileBase> Projectile, AFSDPlayerState* Player, ECrossbowUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UCrossbowUpgrade::UCrossbowUpgrade() {
    this->upgradeType = ECrossbowUpgrades::SpecialArrowPheramone;
}

