#include "PushDynamicStatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UPushDynamicStatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}

UPushDynamicStatusEffectDamageBonusUpgrade::UPushDynamicStatusEffectDamageBonusUpgrade() {
    this->StatusEffectItem = NULL;
}

