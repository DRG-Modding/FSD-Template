#include "StickyFlameStatusEffectUpgrade.h"
#include "Templates/SubclassOf.h"

class UStatusEffect;
class AActor;
class AFSDPlayerState;

FUpgradeValues UStickyFlameStatusEffectUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}

UStickyFlameStatusEffectUpgrade::UStickyFlameStatusEffectUpgrade() {
    this->StatusEffect = NULL;
}

