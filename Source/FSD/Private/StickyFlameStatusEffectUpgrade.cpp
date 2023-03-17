#include "StickyFlameStatusEffectUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UStickyFlameStatusEffectUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}

UStickyFlameStatusEffectUpgrade::UStickyFlameStatusEffectUpgrade() {
    this->StatusEffect = NULL;
}

