#include "ItemRackComponent.h"
#include "Net/UnrealNetwork.h"

void UItemRackComponent::RackItem(AActor* NewItem, APlayerCharacter* Character) {
}

void UItemRackComponent::OnRep_Item(URackableItemComponent* oldItem) {
}

void UItemRackComponent::InitializeRackedItem(URackableItemComponent* rackable) {
}

bool UItemRackComponent::HasRackedItem() const {
    return false;
}

bool UItemRackComponent::CanRackItem(AActor* NewItem) const {
    return false;
}

void UItemRackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemRackComponent, Item);
}

UItemRackComponent::UItemRackComponent() {
    this->UsableComponent = NULL;
    this->AttachToComponent = NULL;
    this->AttachToSocket = false;
    this->RackKey = -1;
    this->Item = NULL;
}

