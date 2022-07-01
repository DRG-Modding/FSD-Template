#include "LockCountSTEBonusUpgrade.h"
#include "Templates/SubclassOf.h"

class UStatusEffect;
class AActor;
class AFSDPlayerState;

FUpgradeValues ULockCountSTEBonusUpgrade::GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, TSubclassOf<UStatusEffect> NewStatusEffect) {
    return FUpgradeValues{};
}

ULockCountSTEBonusUpgrade::ULockCountSTEBonusUpgrade() {
    this->StatusEffect = NULL;
    this->UseTotalLockCount = false;
    this->Amount = 0.00f;
}

