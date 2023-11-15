#include "PathfinderCollisionComponent.h"

UPathfinderCollisionComponent::UPathfinderCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->ActivatePFCollisionAtInit = false;
    this->PFColiType = PFCollisionType::SolidWalkable;
}

void UPathfinderCollisionComponent::DisablePFCollision() {
}

void UPathfinderCollisionComponent::ActivatePFCollision() {
}


