#include "RecalculatedElectroBeam.h"
#include "Net/UnrealNetwork.h"

ARecalculatedElectroBeam::ARecalculatedElectroBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxBeamRange = 600.00f;
    this->UpdateRateSeconds = 0.04f;
    this->BeamState = EElectroBeamState::NotStarted;
}

void ARecalculatedElectroBeam::StartRecalculatingBeam() {
}

void ARecalculatedElectroBeam::SetMaxRange(const float InMaxRange) {
}

void ARecalculatedElectroBeam::OnRep_BeamState() {
}

void ARecalculatedElectroBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARecalculatedElectroBeam, BeamState);
}


