#include "LineSegmentCarver.h"
#include "LineSegmentCarverComponent.h"

ALineSegmentCarver::ALineSegmentCarver() {
    this->LineComponent = CreateDefaultSubobject<ULineSegmentCarverComponent>(TEXT("LineCarverSegmentComponent"));
}

