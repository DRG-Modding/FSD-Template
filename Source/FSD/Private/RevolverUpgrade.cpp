#include "RevolverUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues URevolverUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ERevolerUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

URevolverUpgrade::URevolverUpgrade() {
    this->upgradeType = ERevolerUpgrades::OnKillFearFactor;
}

