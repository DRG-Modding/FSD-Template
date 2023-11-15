#include "InstancedNiagaraComponent.h"

UInstancedNiagaraComponent::UInstancedNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->NiagaraComponent = NULL;
}

void UInstancedNiagaraComponent::SpawnParticlesFromName(const FVector Location, const FName EmitterName) {
}

void UInstancedNiagaraComponent::SpawnParticles(const FVector Location, const int32 EmitterIndex) {
}


