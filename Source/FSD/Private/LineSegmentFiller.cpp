#include "LineSegmentFiller.h"
#include "LineSegmentFillerComponent.h"

ALineSegmentFiller::ALineSegmentFiller() {
    this->LineComponent = CreateDefaultSubobject<ULineSegmentFillerComponent>(TEXT("LineFillerSegmentComponent"));
}

