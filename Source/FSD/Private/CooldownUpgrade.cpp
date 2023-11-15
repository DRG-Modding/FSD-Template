#include "CooldownUpgrade.h"
#include "Templates/SubclassOf.h"

UCooldownUpgrade::UCooldownUpgrade() {
}

FUpgradeValues UCooldownUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}


