#include "StatusDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class UStatusEffect;
class AActor;
class AFSDPlayerState;

FUpgradeValues UStatusDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect) {
    return FUpgradeValues{};
}

UStatusDamageBonusUpgrade::UStatusDamageBonusUpgrade() {
    this->Bonus = 3.00f;
    this->DamageClass = NULL;
}

