#include "PushDynamicStatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UPushDynamicStatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}

UPushDynamicStatusEffectDamageBonusUpgrade::UPushDynamicStatusEffectDamageBonusUpgrade() {
    this->StatusEffectItem = NULL;
}

