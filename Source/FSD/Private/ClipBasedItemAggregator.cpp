#include "ClipBasedItemAggregator.h"

void UClipBasedItemAggregator::ReloadStarted() {
}

void UClipBasedItemAggregator::ReloadComplete() {
}

int32 UClipBasedItemAggregator::GetTotalAmount() const {
    return 0;
}

int32 UClipBasedItemAggregator::GetClipAmount() const {
    return 0;
}

UClipBasedItemAggregator::UClipBasedItemAggregator() {
    this->ShowTotalAmount = true;
    this->ShowClipAndTotalAsOne = false;
}

