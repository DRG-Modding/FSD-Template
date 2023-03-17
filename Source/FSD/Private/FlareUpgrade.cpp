#include "FlareUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UFlareUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> flareClass, EFlareUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UFlareUpgrade::UFlareUpgrade() {
    this->upgradeType = EFlareUpgradeType::Duration;
}

