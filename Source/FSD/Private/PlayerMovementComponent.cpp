#include "PlayerMovementComponent.h"

void UPlayerMovementComponent::RemoveGravityModifier(AActor* SourceActor) {
}

void UPlayerMovementComponent::AddGravityModifier(AActor* SourceActor, float Effect) {
}

UPlayerMovementComponent::UPlayerMovementComponent() {
    this->DebugFastMove = false;
    this->SlidingOnIceSound = NULL;
    this->LedgeClimbZVelocity = 0.00f;
    this->MovementPenalty = 1.00f;
    this->Character = NULL;
}

