#include "FlameWallProjectile.h"

AFlameWallProjectile::AFlameWallProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SegmentParticleClass = NULL;
    this->SegmentCount = 0;
    this->WallWidth = 250.00f;
    this->ImpactClass = NULL;
}


