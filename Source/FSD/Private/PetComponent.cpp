#include "PetComponent.h"
#include "Net/UnrealNetwork.h"

UPetComponent::UPetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void UPetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPetComponent, OwningPlayer);
}


