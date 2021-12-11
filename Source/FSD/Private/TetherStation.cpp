#include "TetherStation.h"
#include "Net/UnrealNetwork.h"

class AFacilityGeneratorLine;

void ATetherStation::SpawnGeneratorLines(const FTransform& startL, const FTransform& startR, const TArray<FTransform>& endL, const TArray<FTransform>& endR, AFacilityGeneratorLine*& outLineL, AFacilityGeneratorLine*& outLineR) {
}

void ATetherStation::SetGeneratorsReady(bool ready) {
}

void ATetherStation::Onrep_FacilityActive() {
}

void ATetherStation::OnRep_AreGeneratorsReady() {
}




void ATetherStation::ActivateFacility() {
}

void ATetherStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATetherStation, AreGeneratorsReady);
    DOREPLIFETIME(ATetherStation, FacilityActive);
}

ATetherStation::ATetherStation() {
    this->FacilityGeneratorLineType = NULL;
    this->AreGeneratorsReady = false;
    this->FacilityActive = false;
}

