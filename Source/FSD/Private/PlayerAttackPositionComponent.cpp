#include "PlayerAttackPositionComponent.h"

void UPlayerAttackPositionComponent::SetGameplayModifier(float modifier) {
}

UPlayerAttackPositionComponent::UPlayerAttackPositionComponent() {
    this->OnZiplineFlyingModifier = 1.50f;
    this->OnZiplineWalkingModifier = 0.50f;
}

