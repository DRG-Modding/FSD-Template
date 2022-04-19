#include "ProjectileExplosion.h"

void UProjectileExplosion::SpawnEffectsFromHit(const FHitResult& Hit) {
}

void UProjectileExplosion::SpawnEffects(FVector Location, FVector Normal) {
}

UProjectileExplosion::UProjectileExplosion() {
    this->ExplosionSound = NULL;
    this->ForceFeedbackEffect = NULL;
    this->ForceFeedbackAttanuation = NULL;
}

