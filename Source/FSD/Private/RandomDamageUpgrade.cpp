#include "RandomDamageUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues URandomDamageUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}

URandomDamageUpgrade::URandomDamageUpgrade() {
}

