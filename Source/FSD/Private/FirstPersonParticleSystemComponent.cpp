#include "FirstPersonParticleSystemComponent.h"

UFirstPersonParticleSystemComponent::UFirstPersonParticleSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UParticleSystemComponent* UFirstPersonParticleSystemComponent::SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy) {
    return NULL;
}


