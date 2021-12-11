#include "ItemPlacerAggregator.h"

class AActor;

void UItemPlacerAggregator::ToggleValid(bool Valid) {
}

void UItemPlacerAggregator::TogglePlacement(bool Inactive) {
}

void UItemPlacerAggregator::ToggleMarkerHidden(bool InHidden) {
}

void UItemPlacerAggregator::GetPlacementEx(FTransform& Placement, bool& OutValidLocation, bool& OutValidMarker) const {
}

bool UItemPlacerAggregator::GetPlacement(FTransform& Placement) const {
    return false;
}

void UItemPlacerAggregator::ClearIgnoredActors() {
}

void UItemPlacerAggregator::AddIgnoredActor(AActor* InActor) {
}

UItemPlacerAggregator::UItemPlacerAggregator() {
    this->PlacementDistance = 200.00f;
    this->MaxOffsetZ = 0.00f;
    this->MinOffsetZ = -200.00f;
    this->ItemHeight = 100.00f;
    this->ShoutOnPlaced = NULL;
    this->MarkerType = NULL;
    this->CanOnlyPlaceOnTerrain = false;
    this->PlacementMarker = NULL;
    this->Item = NULL;
    this->bIsPlacementActive = false;
    this->bIsMarkerHidden = false;
    this->bIsMarkerValid = false;
    this->bCanPlaceMarker = false;
}

