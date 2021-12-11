#include "FrozenStateComponent.h"

void UFrozenStateComponent::Server_ThawPlayer_Implementation() {
}
bool UFrozenStateComponent::Server_ThawPlayer_Validate() {
    return true;
}


UFrozenStateComponent::UFrozenStateComponent() {
    this->AudioFreeFromIce = NULL;
    this->IcePhysicalMaterial = NULL;
    this->DwarfFleshMaterial = NULL;
    this->SlowAnimationSpeed = 2.00f;
}

