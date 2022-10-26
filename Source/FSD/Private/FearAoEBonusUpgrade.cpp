#include "FearAoEBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UFearAoEBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}

UFearAoEBonusUpgrade::UFearAoEBonusUpgrade() {
    this->FearFactor = 0.50f;
    this->range = 500.00f;
}

