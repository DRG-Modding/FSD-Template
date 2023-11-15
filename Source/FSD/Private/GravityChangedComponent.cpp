#include "GravityChangedComponent.h"

UGravityChangedComponent::UGravityChangedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAwakeOnGravityChanged = true;
}

void UGravityChangedComponent::OnGravityChanged(float Gravity, float Change) {
}


