#include "WeaponHitCounterUpgrade.h"
#include "Templates/SubclassOf.h"

UWeaponHitCounterUpgrade::UWeaponHitCounterUpgrade() {
    this->ComponentClass = NULL;
}

FUpgradeValues UWeaponHitCounterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> NewComponentClass) {
    return FUpgradeValues{};
}


