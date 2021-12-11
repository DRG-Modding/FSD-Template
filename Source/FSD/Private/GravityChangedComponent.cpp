#include "GravityChangedComponent.h"

void UGravityChangedComponent::OnGravityChanged(float Gravity, float Change) {
}

UGravityChangedComponent::UGravityChangedComponent() {
    this->bAwakeOnGravityChanged = true;
}

