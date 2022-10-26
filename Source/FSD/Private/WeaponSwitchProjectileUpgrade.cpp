#include "WeaponSwitchProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;
class UWeaponHitCounterComponent;

FUpgradeValues UWeaponSwitchProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass) {
    return FUpgradeValues{};
}

UWeaponSwitchProjectileUpgrade::UWeaponSwitchProjectileUpgrade() {
}

