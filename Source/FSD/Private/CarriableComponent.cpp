#include "CarriableComponent.h"

bool UCarriableComponent::PickupItem(APlayerCharacter* byCharacter) {
    return false;
}

void UCarriableComponent::DropItem() {
}

void UCarriableComponent::AttachChanged(bool Attached, const FVector PrevScale) {
}

UCarriableComponent::UCarriableComponent() {
    this->OverrideCarryAnimationSet = NULL;
    this->OverrideThrowAnimationSet = NULL;
    this->CarriedBy = NULL;
}

