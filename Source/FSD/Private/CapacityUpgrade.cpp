#include "CapacityUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UCapacityUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, int32 componentIndex) {
    return FUpgradeValues{};
}

UCapacityUpgrade::UCapacityUpgrade() {
}

