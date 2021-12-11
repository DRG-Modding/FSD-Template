#include "FacilityPowerStation.h"
#include "Net/UnrealNetwork.h"

void AFacilityPowerStation::StopHacking() {
}

void AFacilityPowerStation::StartHacking() {
}

void AFacilityPowerStation::OnRep_Progress() {
}

void AFacilityPowerStation::OnRep_IsHacking() {
}



bool AFacilityPowerStation::IsHacked() const {
    return false;
}

void AFacilityPowerStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityPowerStation, Progress);
    DOREPLIFETIME(AFacilityPowerStation, IsHacking);
}

AFacilityPowerStation::AFacilityPowerStation() {
    this->ProgressPoint = 0.33f;
    this->ProgresPointCount = 2;
    this->TimeToDefend = 120.00f;
    this->Progress = 0.00f;
    this->IsHacking = false;
}

