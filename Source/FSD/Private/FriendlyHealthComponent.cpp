#include "FriendlyHealthComponent.h"

UFriendlyHealthComponent::UFriendlyHealthComponent() {
    this->MaxHealth = 100.00f;
    this->friendlyFireModifier = 1.00f;
    this->NeutralDamageModifier = 1.00f;
    this->BigHitDamageModifier = 1.00f;
    this->BigHitDamageReductionThreshold = 8.00f;
    this->GenericImpactParticles = NULL;
}

