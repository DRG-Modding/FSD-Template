#include "FearAoEBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UFearAoEBonusUpgrade::UFearAoEBonusUpgrade() {
    this->FearFactor = 0.50f;
    this->range = 500.00f;
}

FUpgradeValues UFearAoEBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}


