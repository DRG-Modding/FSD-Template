#include "FSDProjectileMovementComponent.h"

UFSDProjectileMovementComponent::UFSDProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldPenetrate = false;
    this->InvertIgnoreCollisionAgainst = false;
    this->AccelerationCurve = NULL;
    this->AccelerationMultiplier = 1.00f;
    this->MaxPropulsionTime = 0.00f;
    this->bCancelPenetration = false;
}


