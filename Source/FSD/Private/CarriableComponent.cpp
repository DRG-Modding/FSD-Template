#include "CarriableComponent.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

bool UCarriableComponent::PickupItem(APlayerCharacter* byCharacter) {
    return false;
}

void UCarriableComponent::OnRep_CarriedBy() {
}

void UCarriableComponent::DropItem() {
}

void UCarriableComponent::AttachChanged(bool Attached, const FVector PrevScale) {
}

void UCarriableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCarriableComponent, CarriedBy);
}

UCarriableComponent::UCarriableComponent() {
    this->CarriedBy = NULL;
    this->UseRestriction = EUseRestriction::DepositOnly;
}

