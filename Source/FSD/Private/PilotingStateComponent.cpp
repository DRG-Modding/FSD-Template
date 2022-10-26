#include "PilotingStateComponent.h"
#include "Net/UnrealNetwork.h"

void UPilotingStateComponent::Server_MoveRight_Implementation(float Value) {
}

void UPilotingStateComponent::Server_MoveForward_Implementation(float Value) {
}

void UPilotingStateComponent::OnRep_Vehicle() {
}

void UPilotingStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPilotingStateComponent, Vehicle);
}

UPilotingStateComponent::UPilotingStateComponent() {
    this->Vehicle = NULL;
}

