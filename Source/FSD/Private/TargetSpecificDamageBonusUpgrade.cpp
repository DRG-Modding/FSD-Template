#include "TargetSpecificDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;

FUpgradeValues UTargetSpecificDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}

UTargetSpecificDamageBonusUpgrade::UTargetSpecificDamageBonusUpgrade() {
    this->Bonus = 0.50f;
}

