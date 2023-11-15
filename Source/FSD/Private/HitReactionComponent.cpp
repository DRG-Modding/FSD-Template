#include "HitReactionComponent.h"

UHitReactionComponent::UHitReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstHitReactBlendIn = 0.10f;
    this->OverrideHitReactBlendIn = 0.05f;
    this->AllowHitReactions = true;
    this->SkeletalMesh = NULL;
}

void UHitReactionComponent::PlayHitReaction() {
}

void UHitReactionComponent::OnDamageTaken(float Amount) {
}


