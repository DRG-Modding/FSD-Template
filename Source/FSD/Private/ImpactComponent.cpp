#include "ImpactComponent.h"

UImpactComponent::UImpactComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugText = false;
    this->TrackAcceleration = false;
    this->TrackVelocity = true;
    this->TriggerHighAccelAt = 0.00f;
    this->TriggerAtVelocityDifference = 2.50f;
}

void UImpactComponent::SetCheckVelocity(bool aCheckVelocity) {
}

void UImpactComponent::SetCheckAcceleration(bool aCheckAcceleration) {
}

void UImpactComponent::EnableImpactCheckhing(USceneComponent* cmp) {
}

void UImpactComponent::DisableImpactChecking() {
}


