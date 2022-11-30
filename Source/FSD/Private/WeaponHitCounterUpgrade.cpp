#include "WeaponHitCounterUpgrade.h"
#include "Templates/SubclassOf.h"

class UWeaponHitCounterComponent;
class AFSDPlayerState;
class AActor;

FUpgradeValues UWeaponHitCounterUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> NewComponentClass) {
    return FUpgradeValues{};
}

UWeaponHitCounterUpgrade::UWeaponHitCounterUpgrade() {
    this->ComponentClass = NULL;
}

