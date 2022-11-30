#include "TargetSpecificDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;

FUpgradeValues UTargetSpecificDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}

UTargetSpecificDamageBonusUpgrade::UTargetSpecificDamageBonusUpgrade() {
    this->Bonus = 0.50f;
}

