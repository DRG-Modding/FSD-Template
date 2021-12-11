#include "PathfinderCollisionComponent.h"

void UPathfinderCollisionComponent::DisablePFCollision() {
}

void UPathfinderCollisionComponent::ActivatePFCollision() {
}

UPathfinderCollisionComponent::UPathfinderCollisionComponent() {
    this->ActivatePFCollisionAtInit = false;
    this->PFColiType = PFCollisionType::SolidWalkable;
}

