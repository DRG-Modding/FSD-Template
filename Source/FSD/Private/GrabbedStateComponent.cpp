#include "GrabbedStateComponent.h"
#include "Net/UnrealNetwork.h"

void UGrabbedStateComponent::OnRep_Grabber() {
}

void UGrabbedStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrabbedStateComponent, CurrentGrabber);
}

UGrabbedStateComponent::UGrabbedStateComponent() {
}

