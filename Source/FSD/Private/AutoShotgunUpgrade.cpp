#include "AutoShotgunUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UAutoShotgunUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAutoShotgunUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UAutoShotgunUpgrade::UAutoShotgunUpgrade() {
    this->upgradeType = EAutoShotgunUpgrades::TurretSpecialAttackEnabled;
}

