#include "BasicPistolUpgrade.h"
#include "Templates/SubclassOf.h"

UBasicPistolUpgrade::UBasicPistolUpgrade() {
    this->upgradeType = EBasicPistol::ConsecutiveHitsDamageBonus;
}

FUpgradeValues UBasicPistolUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBasicPistol NewUpgradeType) {
    return FUpgradeValues{};
}


