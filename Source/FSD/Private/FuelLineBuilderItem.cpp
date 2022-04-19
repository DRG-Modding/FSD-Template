#include "FuelLineBuilderItem.h"
#include "ItemPlacerAggregator.h"


AFuelLineBuilderItem::AFuelLineBuilderItem() {
    this->SegmentPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("SegmentPlacer"));
}

