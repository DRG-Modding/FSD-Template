#include "ProjectileExplosion.h"

UProjectileExplosion::UProjectileExplosion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionSound = NULL;
    this->ForceFeedbackEffect = NULL;
    this->ForceFeedbackAttanuation = NULL;
}

void UProjectileExplosion::SpawnEffectsFromHit(const FHitResult& Hit) {
}

void UProjectileExplosion::SpawnEffects(FVector Location, FVector Normal) {
}


