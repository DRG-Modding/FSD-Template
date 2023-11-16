#include "FrozenStateComponent.h"

UFrozenStateComponent::UFrozenStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 10;
    this->AudioFreeFromIce = NULL;
    this->IcePhysicalMaterial = NULL;
    this->DwarfFleshMaterial = NULL;
    this->SlowAnimationSpeed = 2.00f;
}

void UFrozenStateComponent::Server_ThawPlayer_Implementation(float Percent) {
}



