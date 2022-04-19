#include "AssaultRifleUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UAssaultRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAssaultRifleUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UAssaultRifleUpgrade::UAssaultRifleUpgrade() {
    this->upgradeType = EAssaultRifleUpgrade::KillResetsSpread;
}

