#include "FacilityTentacle.h"
#include "Net/UnrealNetwork.h"

AFacilityTentacle::AFacilityTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SwaySpeed = 50.00f;
    this->Extended = false;
    this->TentacleState = EFacilityTentacleState::Idle;
    this->HeadMesh = NULL;
}

void AFacilityTentacle::PlayHitReaction(float amount) {
}


void AFacilityTentacle::OnRep_TentacleState() {
}

void AFacilityTentacle::OnRep_DesiredTarget() {
}

bool AFacilityTentacle::FindBurrowLocation(UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation) {
    return false;
}

void AFacilityTentacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityTentacle, TentacleState);
    DOREPLIFETIME(AFacilityTentacle, DesiredTarget);
}


