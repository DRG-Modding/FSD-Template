#include "LineSegmentFillerComponent.h"

ULineSegmentFillerComponent::ULineSegmentFillerComponent() {
    this->LinePoints.AddDefaulted(2);
    this->Visible = true;
    this->NoiseOverride = NULL;
}

