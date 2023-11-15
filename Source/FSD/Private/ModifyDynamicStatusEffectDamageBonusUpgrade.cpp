#include "ModifyDynamicStatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UModifyDynamicStatusEffectDamageBonusUpgrade::UModifyDynamicStatusEffectDamageBonusUpgrade() {
    this->upgradeType = EModifyStatusEffectDamageUpgrade::Duration;
}

FUpgradeValues UModifyDynamicStatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}


