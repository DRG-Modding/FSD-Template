#include "FlareUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UFlareUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> flareClass, EFlareUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UFlareUpgrade::UFlareUpgrade() {
    this->upgradeType = EFlareUpgradeType::Duration;
}

