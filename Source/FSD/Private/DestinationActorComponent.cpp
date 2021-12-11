#include "DestinationActorComponent.h"
#include "Net/UnrealNetwork.h"

float UDestinationActorComponent::GetDistToDestinationActor() const {
    return 0.0f;
}

void UDestinationActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDestinationActorComponent, DestinationActor);
}

UDestinationActorComponent::UDestinationActorComponent() {
}

