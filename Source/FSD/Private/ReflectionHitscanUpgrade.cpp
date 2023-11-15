#include "ReflectionHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

UReflectionHitscanUpgrade::UReflectionHitscanUpgrade() {
    this->upgradeType = EReflectionHitscanUpgradeType::ReflectionCount;
}

FUpgradeValues UReflectionHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EReflectionHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}


