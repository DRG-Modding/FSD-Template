#include "ShieldGeneratorUpgrade.h"
#include "Templates/SubclassOf.h"

UShieldGeneratorUpgrade::UShieldGeneratorUpgrade() {
    this->upgradeType = EShieldGeneratorUpgrades::Radius;
}

FUpgradeValues UShieldGeneratorUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EShieldGeneratorUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}


