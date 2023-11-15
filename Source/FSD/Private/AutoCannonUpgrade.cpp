#include "AutoCannonUpgrade.h"
#include "Templates/SubclassOf.h"

UAutoCannonUpgrade::UAutoCannonUpgrade() {
    this->upgradeType = EAutoCannonUpgrades::FireTimeIncreaseScaleMultiplier;
}

FUpgradeValues UAutoCannonUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAutoCannonUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


