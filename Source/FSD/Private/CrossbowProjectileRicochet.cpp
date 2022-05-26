#include "CrossbowProjectileRicochet.h"

void UCrossbowProjectileRicochet::Ricochet(const FHitResult& HitResult, const FVector& RelativeLocation) {
}

UCrossbowProjectileRicochet::UCrossbowProjectileRicochet() {
    this->NiagaraTrailParticleSystem = NULL;
    this->RicochetMax = 3;
    this->RicochetRange = 1000.00f;
}

