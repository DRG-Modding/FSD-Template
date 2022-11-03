#include "CryoSprayProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AProjectile;
class AItem;
class AFSDPlayerState;

FUpgradeValues UCryoSprayProjectileUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<AProjectile> NewProjectileClass) {
    return FUpgradeValues{};
}

UCryoSprayProjectileUpgrade::UCryoSprayProjectileUpgrade() {
    this->MaxFireCost = 0.00f;
    this->BaseArch = 0.00f;
    this->ProjectileClass = NULL;
}

