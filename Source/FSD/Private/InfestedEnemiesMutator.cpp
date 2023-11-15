#include "InfestedEnemiesMutator.h"

UInfestedEnemiesMutator::UInfestedEnemiesMutator() {
    this->SpawnEffects.AddDefaulted(5);
}

UParticleSystem* UInfestedEnemiesMutator::GetParticleSystem(AFSDPawn* enemy) const {
    return NULL;
}


