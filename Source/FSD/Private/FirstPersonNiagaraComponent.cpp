#include "FirstPersonNiagaraComponent.h"

UFirstPersonNiagaraComponent::UFirstPersonNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UNiagaraComponent* UFirstPersonNiagaraComponent::SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy) {
    return NULL;
}


