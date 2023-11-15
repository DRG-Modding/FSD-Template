#include "ClipBasedItemAggregator.h"

UClipBasedItemAggregator::UClipBasedItemAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShowTotalAmount = true;
    this->ShowClipAndTotalAsOne = false;
}

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


