#include "RevolverUpgrade.h"
#include "Templates/SubclassOf.h"

URevolverUpgrade::URevolverUpgrade() {
    this->upgradeType = ERevolerUpgrades::OnKillFearFactor;
}

FUpgradeValues URevolverUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ERevolerUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


