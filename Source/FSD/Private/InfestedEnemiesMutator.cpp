#include "InfestedEnemiesMutator.h"

class AFSDPawn;
class UParticleSystem;

UParticleSystem* UInfestedEnemiesMutator::GetParticleSystem(AFSDPawn* enemy) const {
    return NULL;
}

UInfestedEnemiesMutator::UInfestedEnemiesMutator() {
    this->SpawnEffects.AddDefaulted(5);
}

