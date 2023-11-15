#include "CrossbowUpgrade.h"
#include "Templates/SubclassOf.h"

UCrossbowUpgrade::UCrossbowUpgrade() {
    this->upgradeType = ECrossbowUpgrades::SpecialArrowPheramone;
}

FUpgradeValues UCrossbowUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<ACrossbowProjectileBase> Projectile, AFSDPlayerState* Player, ECrossbowUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


