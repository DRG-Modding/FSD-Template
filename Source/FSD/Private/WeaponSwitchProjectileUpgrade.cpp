#include "WeaponSwitchProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class UWeaponHitCounterComponent;
class AFSDPlayerState;
class AActor;

FUpgradeValues UWeaponSwitchProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass) {
    return FUpgradeValues{};
}

UWeaponSwitchProjectileUpgrade::UWeaponSwitchProjectileUpgrade() {
}

