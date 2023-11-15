#include "BobbingComponent.h"

UBobbingComponent::UBobbingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerActor = NULL;
    this->DoOrientationChecks = false;
    this->BobSpeed = 0.00f;
    this->BobSize = 0.00f;
    this->OrentationChecksPerSecond = 0.00f;
}

void UBobbingComponent::SetOwner(AActor* AActor) {
}


