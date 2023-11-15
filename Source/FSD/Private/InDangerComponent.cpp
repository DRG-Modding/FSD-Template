#include "InDangerComponent.h"

UInDangerComponent::UInDangerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageTimeLimit = 0.00f;
    this->DamageThreshold = 0.00f;
    this->RunsOnClients = false;
}

void UInDangerComponent::SetIsActive(bool aFlag) {
}

void UInDangerComponent::OnDamage(float Amount) {
}

bool UInDangerComponent::GetIsActive() const {
    return false;
}


