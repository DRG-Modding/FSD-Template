#include "FirstPersonParticleSystemComponent.h"

class UParticleSystem;
class USceneComponent;
class UParticleSystemComponent;

UParticleSystemComponent* UFirstPersonParticleSystemComponent::SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy) {
    return NULL;
}

UFirstPersonParticleSystemComponent::UFirstPersonParticleSystemComponent() {
}

