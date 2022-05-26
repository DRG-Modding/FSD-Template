#include "FirstPersonNiagaraComponent.h"

class USceneComponent;
class UNiagaraSystem;
class UNiagaraComponent;

UNiagaraComponent* UFirstPersonNiagaraComponent::SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy) {
    return NULL;
}

UFirstPersonNiagaraComponent::UFirstPersonNiagaraComponent() {
}

