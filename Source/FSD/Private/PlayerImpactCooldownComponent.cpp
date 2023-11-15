#include "PlayerImpactCooldownComponent.h"

UPlayerImpactCooldownComponent::UPlayerImpactCooldownComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoolDownTime = 1.50f;
}

bool UPlayerImpactCooldownComponent::CheckCanImpact(AActor* Actor) {
    return false;
}


