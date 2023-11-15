#include "HeightenedSenseComponent.h"

UHeightenedSenseComponent::UHeightenedSenseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeightenSenseAffliction = NULL;
    this->AlertDistance = 2000.00f;
    this->bAfflictionActivated = false;
}

void UHeightenedSenseComponent::RemoveTracker(AActor* TrackerActor) {
}

void UHeightenedSenseComponent::AddTracker(AActor* TrackerActor) {
}


