#include "ImpactComponent.h"

class USceneComponent;

void UImpactComponent::SetCheckVelocity(bool aCheckVelocity) {
}

void UImpactComponent::SetCheckAcceleration(bool aCheckAcceleration) {
}

void UImpactComponent::EnableImpactCheckhing(USceneComponent* cmp) {
}

void UImpactComponent::DisableImpactChecking() {
}

UImpactComponent::UImpactComponent() {
    this->DebugText = false;
    this->TrackAcceleration = false;
    this->TrackVelocity = true;
    this->TriggerHighAccelAt = 0.00f;
    this->TriggerAtVelocityDifference = 2.50f;
}

