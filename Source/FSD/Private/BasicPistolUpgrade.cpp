#include "BasicPistolUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UBasicPistolUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBasicPistol NewUpgradeType) {
    return FUpgradeValues{};
}

UBasicPistolUpgrade::UBasicPistolUpgrade() {
    this->upgradeType = EBasicPistol::ConsecutiveHitsDamageBonus;
}

