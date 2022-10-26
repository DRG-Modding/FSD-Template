#include "SplineTrailComponent.h"
#include "Net/UnrealNetwork.h"

void USplineTrailComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineTrailComponent, Seed);
}

USplineTrailComponent::USplineTrailComponent() {
    this->ForwardAxis = ESplineMeshAxis::Z;
    this->CollisionCapsuleRadius = 10.00f;
    this->TrailLength = 500.00f;
    this->TrailSubSegments = 10;
    this->TrailSegmentOverlap = 5.00f;
    this->VerticalOffset = 10.00f;
    this->HeadBobbingLength = 50.00f;
    this->HeadBobbingSpeed = 4.00f;
    this->Spline = NULL;
    this->Seed = 0;
}

