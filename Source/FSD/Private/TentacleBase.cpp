#include "TentacleBase.h"

class AStabberVineRoot;

void ATentacleBase::SetRestingTransform(const FTransform& restingTransform, bool startAtRest) {
}


void ATentacleBase::MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring) {
}

AStabberVineRoot* ATentacleBase::GetStabberVineRoot() const {
    return NULL;
}



ATentacleBase::ATentacleBase() {
    this->SplineComponent = NULL;
    this->HeadMovementDuration = 0.00f;
    this->CanSwayCooldown = 0.00f;
    this->NeckBaseTangentLength = 0.00f;
    this->NeckTopTangentLength = 0.00f;
    this->DurationTentacleRetract = 1.00f;
    this->DurationTentacleFoldout = 1.00f;
    this->HeadRoot = NULL;
    this->HeadRotator = NULL;
}

