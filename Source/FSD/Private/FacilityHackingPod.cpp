#include "FacilityHackingPod.h"
#include "Net/UnrealNetwork.h"

AFacilityHackingPod::AFacilityHackingPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PodState = EHackingPodState::EClosed;
}

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


