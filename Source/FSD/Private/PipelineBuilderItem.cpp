#include "PipelineBuilderItem.h"
#include "ItemPlacerAggregator.h"

APipelineBuilderItem::APipelineBuilderItem() {
    this->SegmentPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("SegmentPlacer"));
}

