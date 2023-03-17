#include "WeaponHitCounterUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UWeaponHitCounterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> NewComponentClass) {
    return FUpgradeValues{};
}

UWeaponHitCounterUpgrade::UWeaponHitCounterUpgrade() {
    this->ComponentClass = NULL;
}

