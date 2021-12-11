#include "WeaponImpactComponent.h"

class USkeletalMeshComponent;

void UWeaponImpactComponent::EnableImpactCheckhing(USkeletalMeshComponent* cmp) {
}

void UWeaponImpactComponent::DisableImpactChecking() {
}

UWeaponImpactComponent::UWeaponImpactComponent() {
    this->DebugText = false;
    this->ActiveMesh = NULL;
    this->TrackAcceleration = false;
    this->TrackVelocity = true;
    this->TriggerHighAccelAt = 0.00f;
    this->TriggerAtVelocityDifference = 2.50f;
}

