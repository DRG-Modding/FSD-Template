#include "CapacityBasedItemAggregator.h"

UCapacityBasedItemAggregator::UCapacityBasedItemAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->showClipCount = true;
}

void UCapacityBasedItemAggregator::ReloadStarted() {
}

void UCapacityBasedItemAggregator::ReloadComplete() {
}

int32 UCapacityBasedItemAggregator::GetMaxAmount() const {
    return 0;
}

int32 UCapacityBasedItemAggregator::GetCurrentAmount() const {
    return 0;
}


