#include "HeightenedSenseComponent.h"

void UHeightenedSenseComponent::RemoveTracker(AActor* TrackerActor) {
}

void UHeightenedSenseComponent::AddTracker(AActor* TrackerActor) {
}

UHeightenedSenseComponent::UHeightenedSenseComponent() {
    this->HeightenSenseAffliction = NULL;
    this->AlertDistance = 2000.00f;
    this->bAfflictionActivated = false;
}

