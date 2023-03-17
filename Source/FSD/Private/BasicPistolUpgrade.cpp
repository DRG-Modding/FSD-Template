#include "BasicPistolUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UBasicPistolUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBasicPistol NewUpgradeType) {
    return FUpgradeValues{};
}

UBasicPistolUpgrade::UBasicPistolUpgrade() {
    this->upgradeType = EBasicPistol::ConsecutiveHitsDamageBonus;
}

