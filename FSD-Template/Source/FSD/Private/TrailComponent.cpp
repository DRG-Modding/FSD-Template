#include "TrailComponent.h"

class UTrailComponent;
class UWorld;

int32 UTrailComponent::TrailLength() const {
    return 0;
}

void UTrailComponent::ToggleDrawPath(bool Visible) {
}

void UTrailComponent::Reset() {
}

FVector UTrailComponent::GetTrailPoint(int32 Index) const {
    return FVector{};
}

FVector UTrailComponent::GetNextTrailPointFrom(FVector From) const {
    return FVector{};
}

int32 UTrailComponent::GetNearestTrailIndex(FVector Location) const {
    return 0;
}

UTrailComponent* UTrailComponent::GetNearestPlayerTrail(UWorld* World, FVector From, float MinDist, float MaxDist) {
    return NULL;
}

FColor UTrailComponent::GetDrawColor() const {
    return FColor{};
}

UTrailComponent::UTrailComponent() {
    this->MinRadius = 25.00f;
    this->MinStep = 25.00f;
    this->MaxStep = 0.00f;
    this->MinimizePath = false;
    this->Query = TraceTypeQuery1;
    this->bDrawPath = false;
    this->MaxDrawDistance = 1000.00f;
    this->PathLineWidth = 0.00f;
    this->PathNodeSize = 1.00f;
}

