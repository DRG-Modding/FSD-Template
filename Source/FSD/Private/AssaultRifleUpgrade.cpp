#include "AssaultRifleUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UAssaultRifleUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAssaultRifleUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UAssaultRifleUpgrade::UAssaultRifleUpgrade() {
    this->upgradeType = EAssaultRifleUpgrade::KillResetsSpread;
}

