#include "PushSatusEffectDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UPushSatusEffectDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}

UPushSatusEffectDamageBonusUpgrade::UPushSatusEffectDamageBonusUpgrade() {
    this->StatusEffect = NULL;
    this->Chance = 0.00f;
    this->IgnoreArmorHit = false;
    this->Condition = NULL;
}

