#include "RevolverUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues URevolverUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ERevolerUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

URevolverUpgrade::URevolverUpgrade() {
    this->upgradeType = ERevolerUpgrades::OnKillFearFactor;
}

