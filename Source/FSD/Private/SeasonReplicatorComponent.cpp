#include "SeasonReplicatorComponent.h"
#include "Net/UnrealNetwork.h"

USeasonReplicatorComponent::USeasonReplicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HostActiveSeason = NULL;
}

void USeasonReplicatorComponent::OnRep_HostActiveSeason() {
}

void USeasonReplicatorComponent::CompleteSeasonEvent_Implementation(USeasonEventData* InEvent) {
}

void USeasonReplicatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USeasonReplicatorComponent, HostActiveSeason);
}


