#include "FlareUpgrade.h"
#include "Templates/SubclassOf.h"

UFlareUpgrade::UFlareUpgrade() {
    this->upgradeType = EFlareUpgradeType::Duration;
}

FUpgradeValues UFlareUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> flareClass, EFlareUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


