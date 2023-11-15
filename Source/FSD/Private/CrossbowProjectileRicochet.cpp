#include "CrossbowProjectileRicochet.h"

UCrossbowProjectileRicochet::UCrossbowProjectileRicochet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NiagaraTrailParticleSystem = NULL;
    this->RicochetMax = 3;
    this->RicochetRange = 1000.00f;
    this->CastedOwner = NULL;
}

void UCrossbowProjectileRicochet::Ricochet(const FHitResult& HitResult, const FVector& RelativeLocation) {
}


