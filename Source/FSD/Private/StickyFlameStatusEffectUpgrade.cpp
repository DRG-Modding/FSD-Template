#include "StickyFlameStatusEffectUpgrade.h"
#include "Templates/SubclassOf.h"

UStickyFlameStatusEffectUpgrade::UStickyFlameStatusEffectUpgrade() {
    this->StatusEffect = NULL;
}

FUpgradeValues UStickyFlameStatusEffectUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}


