#include "PlayerImpactCooldownComponent.h"

bool UPlayerImpactCooldownComponent::CheckCanImpact(AActor* Actor) {
    return false;
}

UPlayerImpactCooldownComponent::UPlayerImpactCooldownComponent() {
    this->CoolDownTime = 1.50f;
}

