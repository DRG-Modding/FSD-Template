#include "PipelineBuilderItem.h"
#include "ItemPlacerAggregator.h"

APipelineBuilderItem::APipelineBuilderItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SegmentPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("SegmentPlacer"));
}


