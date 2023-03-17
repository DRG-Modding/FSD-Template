#include "CooldownUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UCooldownUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player) {
    return FUpgradeValues{};
}

UCooldownUpgrade::UCooldownUpgrade() {
}

