#include "PilotingStateComponent.h"
#include "Net/UnrealNetwork.h"

void UPilotingStateComponent::Server_MoveRight_Implementation(float Value) {
}
bool UPilotingStateComponent::Server_MoveRight_Validate(float Value) {
    return true;
}

void UPilotingStateComponent::Server_MoveForward_Implementation(float Value) {
}
bool UPilotingStateComponent::Server_MoveForward_Validate(float Value) {
    return true;
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

