#include "ShieldGeneratorUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AItem;

FUpgradeValues UShieldGeneratorUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EShieldGeneratorUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UShieldGeneratorUpgrade::UShieldGeneratorUpgrade() {
    this->upgradeType = EShieldGeneratorUpgrades::Radius;
}

