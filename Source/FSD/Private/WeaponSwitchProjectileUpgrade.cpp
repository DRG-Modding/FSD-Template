#include "WeaponSwitchProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

UWeaponSwitchProjectileUpgrade::UWeaponSwitchProjectileUpgrade() {
}

FUpgradeValues UWeaponSwitchProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass) {
    return FUpgradeValues{};
}


