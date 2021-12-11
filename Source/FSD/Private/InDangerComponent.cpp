#include "InDangerComponent.h"

void UInDangerComponent::SetIsActive(bool aFlag) {
}

void UInDangerComponent::OnDamage(float Amount) {
}

bool UInDangerComponent::GetIsActive() const {
    return false;
}

UInDangerComponent::UInDangerComponent() {
    this->DamageTimeLimit = 0.00f;
    this->DamageThreshold = 0.00f;
    this->RunsOnClients = false;
}

