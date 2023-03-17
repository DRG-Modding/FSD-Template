#include "InfestedEnemiesMutator.h"

UParticleSystem* UInfestedEnemiesMutator::GetParticleSystem(AFSDPawn* enemy) const {
    return NULL;
}

UInfestedEnemiesMutator::UInfestedEnemiesMutator() {
    this->SpawnEffects.AddDefaulted(5);
}

