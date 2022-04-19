#include "CryoSprayProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class AFSDPlayerState;
class AProjectile;

FUpgradeValues UCryoSprayProjectileUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<AProjectile> NewProjectileClass) {
    return FUpgradeValues{};
}

UCryoSprayProjectileUpgrade::UCryoSprayProjectileUpgrade() {
    this->MaxFireCost = 0.00f;
    this->BaseArch = 0.00f;
    this->ProjectileClass = NULL;
}

