#include "AutoCannonUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UAutoCannonUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAutoCannonUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UAutoCannonUpgrade::UAutoCannonUpgrade() {
    this->upgradeType = EAutoCannonUpgrades::FireTimeIncreaseScaleMultiplier;
}

