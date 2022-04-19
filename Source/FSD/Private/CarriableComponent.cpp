#include "CarriableComponent.h"

class APlayerCharacter;

bool UCarriableComponent::PickupItem(APlayerCharacter* byCharacter) {
    return false;
}

void UCarriableComponent::DropItem() {
}

void UCarriableComponent::AttachChanged(bool Attached, const FVector PrevScale) {
}

UCarriableComponent::UCarriableComponent() {
    this->CarriedBy = NULL;
}

