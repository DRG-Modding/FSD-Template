#include "FacilityTentacle.h"
#include "Net/UnrealNetwork.h"

class UDebrisPositioning;

void AFacilityTentacle::PlayHitReaction(float Amount) {
}


void AFacilityTentacle::OnRep_TentacleState() {
}

bool AFacilityTentacle::FindBurrowLocation(UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation) {
    return false;
}

void AFacilityTentacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityTentacle, TentacleState);
}

AFacilityTentacle::AFacilityTentacle() {
    this->SwaySpeed = 50.00f;
    this->Extended = false;
    this->TentacleState = EFacilityTentacleState::Idle;
    this->HeadMesh = NULL;
}

