#include "FacilityHackingPod.h"
#include "Net/UnrealNetwork.h"

void AFacilityHackingPod::SetState(EHackingPodState aState) {
}

void AFacilityHackingPod::OnRep_PodState(EHackingPodState oldState) {
}



EHackingPodState AFacilityHackingPod::GetState() const {
    return EHackingPodState::EClosed;
}

void AFacilityHackingPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityHackingPod, PodState);
}

AFacilityHackingPod::AFacilityHackingPod() {
    this->PodState = EHackingPodState::EClosed;
}

