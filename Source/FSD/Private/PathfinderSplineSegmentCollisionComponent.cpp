#include "PathfinderSplineSegmentCollisionComponent.h"

void UPathfinderSplineSegmentCollisionComponent::UpdateFromSpline(USplineComponent* SplineComponent, int32 StartIndex) {
}

void UPathfinderSplineSegmentCollisionComponent::Update(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent) {
}

void UPathfinderSplineSegmentCollisionComponent::Clear() {
}

UPathfinderSplineSegmentCollisionComponent::UPathfinderSplineSegmentCollisionComponent() {
    this->Radius = 100.00f;
    this->CollisionType = PFCollisionType::SolidWalkable;
}

