#include "DroneCarryComponent.h"

void UDroneCarryComponent::OnCarriedUsed(APlayerCharacter* User, EInputKeys Key) {
}

void UDroneCarryComponent::OnCarriedDropped() {
}

UDroneCarryComponent::UDroneCarryComponent() {
    this->CurrentCarried = NULL;
}

