#include "ProjectileLauncherBaseUpgrade.h"
#include "Templates/SubclassOf.h"

UProjectileLauncherBaseUpgrade::UProjectileLauncherBaseUpgrade() {
    this->upgradeType = EProjectileLauncherBaseUpgradeType::VerticalSpread;
}

FUpgradeValues UProjectileLauncherBaseUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


