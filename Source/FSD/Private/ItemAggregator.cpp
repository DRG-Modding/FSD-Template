#include "ItemAggregator.h"

UItemAggregator::UItemAggregator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CounterText = FText::FromString(TEXT("Ammo"));
}

void UItemAggregator::UnbindAllEvents() {
}


