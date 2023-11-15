#include "FriendlyHealthComponent.h"

UFriendlyHealthComponent::UFriendlyHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxHealth = 100.00f;
    this->FriendlyFireModifier = 1.00f;
    this->NeutralDamageModifier = 1.00f;
    this->BigHitDamageModifier = 1.00f;
    this->BigHitDamageReductionThreshold = 8.00f;
    this->GenericImpactParticles = NULL;
}

float UFriendlyHealthComponent::GetMaxHealth() const {
    return 0.0f;
}


