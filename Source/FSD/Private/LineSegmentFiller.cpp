#include "LineSegmentFiller.h"
#include "LineSegmentFillerComponent.h"

ALineSegmentFiller::ALineSegmentFiller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineComponent = CreateDefaultSubobject<ULineSegmentFillerComponent>(TEXT("LineFillerSegmentComponent"));
}


