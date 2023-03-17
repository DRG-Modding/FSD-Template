#include "PushDynamicStatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UPushDynamicStatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}

UPushDynamicStatusEffectDamageBonusUpgrade::UPushDynamicStatusEffectDamageBonusUpgrade() {
    this->StatusEffectItem = NULL;
}

