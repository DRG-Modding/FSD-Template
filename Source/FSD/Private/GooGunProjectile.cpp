#include "GooGunProjectile.h"
#include "Templates/SubclassOf.h"

class AGooGunPuddle;
class AActor;
class UPrimitiveComponent;

AGooGunPuddle* AGooGunProjectile::SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass) {
    return NULL;
}

void AGooGunProjectile::DealSocketArmorDamage(AActor* Actor, UPrimitiveComponent* Target) {
}

AGooGunProjectile::AGooGunProjectile() {
    this->PuddleLifeTime = 12.00f;
    this->FragmentCount = 0;
}

