#include "WeaponSwitchProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AFSDPlayerState;
class AActor;
class UWeaponHitCounterComponent;

FUpgradeValues UWeaponSwitchProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass) {
    return FUpgradeValues{};
}

UWeaponSwitchProjectileUpgrade::UWeaponSwitchProjectileUpgrade() {
}

