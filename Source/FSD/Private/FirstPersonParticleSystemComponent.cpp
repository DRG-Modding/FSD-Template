#include "FirstPersonParticleSystemComponent.h"

class USceneComponent;
class UParticleSystemComponent;
class UParticleSystem;

UParticleSystemComponent* UFirstPersonParticleSystemComponent::SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy) {
    return NULL;
}

UFirstPersonParticleSystemComponent::UFirstPersonParticleSystemComponent() {
}

