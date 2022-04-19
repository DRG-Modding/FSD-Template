#include "HitReactionComponent.h"

void UHitReactionComponent::PlayHitReaction() {
}

void UHitReactionComponent::OnDamageTaken(float Amount) {
}

UHitReactionComponent::UHitReactionComponent() {
    this->FirstHitReactBlendIn = 0.10f;
    this->OverrideHitReactBlendIn = 0.05f;
    this->SkeletalMesh = NULL;
}

