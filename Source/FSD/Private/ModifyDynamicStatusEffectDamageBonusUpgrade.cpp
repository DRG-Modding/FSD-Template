#include "ModifyDynamicStatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UModifyDynamicStatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade NewUpgradeType) {
    return FUpgradeValues{};
}

UModifyDynamicStatusEffectDamageBonusUpgrade::UModifyDynamicStatusEffectDamageBonusUpgrade() {
    this->upgradeType = EModifyStatusEffectDamageUpgrade::Duration;
}

