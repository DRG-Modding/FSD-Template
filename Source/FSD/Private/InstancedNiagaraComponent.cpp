#include "InstancedNiagaraComponent.h"

void UInstancedNiagaraComponent::SpawnParticlesFromName(const FVector Location, const FName EmitterName) {
}

void UInstancedNiagaraComponent::SpawnParticles(const FVector Location, const int32 EmitterIndex) {
}

UInstancedNiagaraComponent::UInstancedNiagaraComponent() {
    this->NiagaraComponent = NULL;
}

