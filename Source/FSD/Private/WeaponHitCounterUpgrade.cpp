#include "WeaponHitCounterUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;
class UWeaponHitCounterComponent;

FUpgradeValues UWeaponHitCounterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> NewComponentClass) {
    return FUpgradeValues{};
}

UWeaponHitCounterUpgrade::UWeaponHitCounterUpgrade() {
    this->ComponentClass = NULL;
}

