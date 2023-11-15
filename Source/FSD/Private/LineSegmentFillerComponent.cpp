#include "LineSegmentFillerComponent.h"

ULineSegmentFillerComponent::ULineSegmentFillerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinePoints.AddDefaulted(2);
    this->Visible = true;
    this->NoiseOverride = NULL;
}


