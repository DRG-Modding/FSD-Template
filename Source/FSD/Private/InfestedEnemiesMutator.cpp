#include "InfestedEnemiesMutator.h"

class UParticleSystem;
class AFSDPawn;

UParticleSystem* UInfestedEnemiesMutator::GetParticleSystem(AFSDPawn* enemy) const {
    return NULL;
}

UInfestedEnemiesMutator::UInfestedEnemiesMutator() {
    this->SpawnEffects.AddDefaulted(5);
}

