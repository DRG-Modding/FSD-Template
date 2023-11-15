#include "PushDynamicStatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UPushDynamicStatusEffectDamageBonusUpgrade::UPushDynamicStatusEffectDamageBonusUpgrade() {
    this->StatusEffectItem = NULL;
}

FUpgradeValues UPushDynamicStatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}


