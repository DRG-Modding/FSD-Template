#include "RevolverUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues URevolverUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ERevolerUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

URevolverUpgrade::URevolverUpgrade() {
    this->upgradeType = ERevolerUpgrades::OnKillFearFactor;
}

