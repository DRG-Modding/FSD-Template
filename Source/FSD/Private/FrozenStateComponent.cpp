#include "FrozenStateComponent.h"

void UFrozenStateComponent::Server_ThawPlayer_Implementation() {
}


UFrozenStateComponent::UFrozenStateComponent() {
    this->AudioFreeFromIce = NULL;
    this->IcePhysicalMaterial = NULL;
    this->DwarfFleshMaterial = NULL;
    this->SlowAnimationSpeed = 2.00f;
    this->HoldToBreakTime = 0.25f;
}

