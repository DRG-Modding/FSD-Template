#include "PetComponent.h"
#include "Net/UnrealNetwork.h"


void UPetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPetComponent, OwningPlayer);
}

UPetComponent::UPetComponent() {
}

