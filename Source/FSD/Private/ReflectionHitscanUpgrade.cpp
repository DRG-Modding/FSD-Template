#include "ReflectionHitscanUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;

FUpgradeValues UReflectionHitscanUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EReflectionHitscanUpgradeType NewUpgradeType) {
    return FUpgradeValues{};
}

UReflectionHitscanUpgrade::UReflectionHitscanUpgrade() {
    this->upgradeType = EReflectionHitscanUpgradeType::ReflectionCount;
}

