#include "RandomDamageUpgrade.h"
#include "Templates/SubclassOf.h"

URandomDamageUpgrade::URandomDamageUpgrade() {
}

FUpgradeValues URandomDamageUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}


