#include "CarriableComponent.h"

UCarriableComponent::UCarriableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideCarryAnimationSet = NULL;
    this->OverrideThrowAnimationSet = NULL;
    this->CarriedBy = NULL;
}

bool UCarriableComponent::PickupItem(APlayerCharacter* byCharacter) {
    return false;
}

void UCarriableComponent::DropItem() {
}

void UCarriableComponent::AttachChanged(bool Attached, const FVector PrevScale) {
}


