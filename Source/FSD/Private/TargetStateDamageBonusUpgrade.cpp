#include "TargetStateDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UTargetStateDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, ETargetStateDamageBonusType NewTargetState) {
    return FUpgradeValues{};
}

UTargetStateDamageBonusUpgrade::UTargetStateDamageBonusUpgrade() {
    this->TargetState = ETargetStateDamageBonusType::Frozen;
    this->Bonus = 3.00f;
    this->DamageClass = NULL;
}

