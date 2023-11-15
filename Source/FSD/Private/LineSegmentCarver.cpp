#include "LineSegmentCarver.h"
#include "LineSegmentCarverComponent.h"

ALineSegmentCarver::ALineSegmentCarver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineComponent = CreateDefaultSubobject<ULineSegmentCarverComponent>(TEXT("LineCarverSegmentComponent"));
}


