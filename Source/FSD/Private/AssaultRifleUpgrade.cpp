#include "AssaultRifleUpgrade.h"
#include "Templates/SubclassOf.h"

UAssaultRifleUpgrade::UAssaultRifleUpgrade() {
    this->upgradeType = EAssaultRifleUpgrade::KillResetsSpread;
}

FUpgradeValues UAssaultRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAssaultRifleUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


