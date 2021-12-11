#include "BobbingComponent.h"

class AActor;

void UBobbingComponent::SetOwner(AActor* AActor) {
}

UBobbingComponent::UBobbingComponent() {
    this->OwnerActor = NULL;
    this->DoOrientationChecks = false;
    this->BobSpeed = 0.00f;
    this->BobSize = 0.00f;
    this->OrentationChecksPerSecond = 0.00f;
}

