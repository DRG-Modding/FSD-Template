#include "TentacleBase.h"
#include "Net/UnrealNetwork.h"

class AStabberVineRoot;


void ATentacleBase::OnRep_DesiredTarget() {
}

void ATentacleBase::MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring) {
}

AStabberVineRoot* ATentacleBase::GetStabberVineRoot() const {
    return NULL;
}



void ATentacleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATentacleBase, DesiredTarget);
}

ATentacleBase::ATentacleBase() {
    this->SplineComponent = NULL;
    this->MovementAlpha = 0.00f;
    this->HeadMovementDuration = 0.00f;
    this->CanSwayCooldown = 0.00f;
    this->NeckBaseTangentLength = 0.00f;
    this->NeckTopTangentLength = 0.00f;
    this->DurationTentacleRetract = 1.00f;
    this->DurationTentacleFoldout = 1.00f;
    this->HeadRoot = NULL;
    this->HeadRotator = NULL;
}

