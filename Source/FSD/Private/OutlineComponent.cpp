#include "OutlineComponent.h"

class UPrimitiveComponent;
class UHealthComponentBase;
class AItem;
class AActor;

void UOutlineComponent::UnlockOutline() {
}

void UOutlineComponent::ToggleDefaultOutline(bool Visible) {
}

void UOutlineComponent::SetOutline(EOutline outline) {
}

void UOutlineComponent::RemoveFromOutline(UPrimitiveComponent* Component) {
}

void UOutlineComponent::OnToggleOutline(bool Visible) {
}

void UOutlineComponent::OnOwnerDeath(UHealthComponentBase* HealthComponent) {
}

void UOutlineComponent::OnItemUnequipped(AItem* Item) {
}

void UOutlineComponent::OnItemEquipped(AItem* Item) {
}

void UOutlineComponent::LockOutline() {
}

void UOutlineComponent::EnableActivateOnHoldTab() {
}

void UOutlineComponent::AddToOutline(UPrimitiveComponent* Component) {
}

void UOutlineComponent::AddActorToOutline(AActor* Actor) {
}

UOutlineComponent::UOutlineComponent() {
    this->DefaultOutline = EOutline::OL_NEUTRAL;
    this->ActiveOnHoldTAB = false;
    this->CustomLaserPointDuration = 0.00f;
    this->LockCounter = 0;
    this->CurrentOutline = EOutline::OL_NONE;
}

