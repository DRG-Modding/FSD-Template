#include "PlayerImpactCooldownComponent.h"

class AActor;

bool UPlayerImpactCooldownComponent::CheckCanImpact(AActor* Actor) {
    return false;
}

UPlayerImpactCooldownComponent::UPlayerImpactCooldownComponent() {
    this->CoolDownTime = 1.50f;
}

