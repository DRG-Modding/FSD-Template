#include "ShieldGeneratorUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UShieldGeneratorUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EShieldGeneratorUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UShieldGeneratorUpgrade::UShieldGeneratorUpgrade() {
    this->upgradeType = EShieldGeneratorUpgrades::Radius;
}

