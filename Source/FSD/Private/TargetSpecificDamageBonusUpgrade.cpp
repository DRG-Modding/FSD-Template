#include "TargetSpecificDamageBonusUpgrade.h"
#include "Templates/SubclassOf.h"

UTargetSpecificDamageBonusUpgrade::UTargetSpecificDamageBonusUpgrade() {
    this->Bonus = 0.50f;
}

FUpgradeValues UTargetSpecificDamageBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, FName NewKey) {
    return FUpgradeValues{};
}


