#include "GooGunProjectile.h"
#include "Templates/SubclassOf.h"

class AGooGunPuddle;

AGooGunPuddle* AGooGunProjectile::SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass) {
    return NULL;
}

AGooGunProjectile::AGooGunProjectile() {
    this->PuddleLifeTime = 12.00f;
    this->FragmentCount = 0;
}

