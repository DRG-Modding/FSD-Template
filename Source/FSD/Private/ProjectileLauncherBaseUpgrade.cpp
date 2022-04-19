#include "ProjectileLauncherBaseUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UProjectileLauncherBaseUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UProjectileLauncherBaseUpgrade::UProjectileLauncherBaseUpgrade() {
    this->upgradeType = EProjectileLauncherBaseUpgradeType::VerticalSpread;
}

