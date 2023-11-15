#include "PilotingStateComponent.h"
#include "Net/UnrealNetwork.h"

UPilotingStateComponent::UPilotingStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StateId = 13;
    this->Vehicle = NULL;
}

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


