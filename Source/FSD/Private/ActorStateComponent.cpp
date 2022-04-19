#include "ActorStateComponent.h"
#include "Net/UnrealNetwork.h"

class UActorStateComponent;

void UActorStateComponent::OnRep_CurrentState(UActorStateComponent* PreviousState) {
}

bool UActorStateComponent::IsStateActive() const {
    return false;
}

void UActorStateComponent::GotoState() {
}

void UActorStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActorStateComponent, CurrentState);
}

UActorStateComponent::UActorStateComponent() {
    this->CurrentState = NULL;
    this->NextState = NULL;
    this->MasterState = NULL;
    this->StateActiveTime = 0.00f;
}

