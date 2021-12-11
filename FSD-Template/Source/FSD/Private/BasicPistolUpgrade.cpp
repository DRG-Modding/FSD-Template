#include "BasicPistolUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UBasicPistolUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBasicPistol NewUpgradeType) {
    return FUpgradeValues{};
}

UBasicPistolUpgrade::UBasicPistolUpgrade() {
    this->upgradeType = EBasicPistol::ConsecutiveHitsDamageBonus;
}

