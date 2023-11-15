#include "PlayerMovementComponent.h"

UPlayerMovementComponent::UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugFastMove = false;
    this->SlidingOnIceSound = NULL;
    this->LedgeClimbZVelocity = 0.00f;
    this->MovementPenalty = 1.00f;
    this->Character = NULL;
}

void UPlayerMovementComponent::RemoveGravityModifier(AActor* SourceActor) {
}

void UPlayerMovementComponent::AddGravityModifier(AActor* SourceActor, float Effect) {
}


