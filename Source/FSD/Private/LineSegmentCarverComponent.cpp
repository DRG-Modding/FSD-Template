#include "LineSegmentCarverComponent.h"

ULineSegmentCarverComponent::ULineSegmentCarverComponent() {
    this->LinePoints.AddDefaulted(2);
    this->Visible = true;
    this->Layer = 0;
    this->Cielingheight = 10000.00f;
    this->FloorDepth = 0.00f;
    this->CeilingNoiseOverride = NULL;
    this->WallNoiseOverride = NULL;
    this->FloorNoiseOverride = NULL;
    this->UseDetailNoise = true;
}

