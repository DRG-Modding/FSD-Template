#include "WeaponSwitchProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

FUpgradeValues UWeaponSwitchProjectileUpgrade::GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass) {
    return FUpgradeValues{};
}

UWeaponSwitchProjectileUpgrade::UWeaponSwitchProjectileUpgrade() {
}

