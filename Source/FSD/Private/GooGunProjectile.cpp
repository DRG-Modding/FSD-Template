#include "GooGunProjectile.h"
#include "Templates/SubclassOf.h"

AGooGunProjectile::AGooGunProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PuddleLifeTime = 12.00f;
    this->FragmentCount = 0;
}

AGooGunPuddle* AGooGunProjectile::SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass) {
    return NULL;
}

void AGooGunProjectile::DealSocketArmorDamage(AActor* Actor, UPrimitiveComponent* Target) {
}


