#include "CapacityBasedItemAggregator.h"

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

UCapacityBasedItemAggregator::UCapacityBasedItemAggregator() {
    this->showClipCount = true;
}

