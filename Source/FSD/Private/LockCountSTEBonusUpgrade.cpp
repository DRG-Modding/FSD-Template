#include "LockCountSTEBonusUpgrade.h"
#include "Templates/SubclassOf.h"

ULockCountSTEBonusUpgrade::ULockCountSTEBonusUpgrade() {
    this->StatusEffect = NULL;
    this->UseTotalLockCount = false;
    this->Amount = 0.00f;
}

FUpgradeValues ULockCountSTEBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}


