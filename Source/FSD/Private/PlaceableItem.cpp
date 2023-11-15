#include "PlaceableItem.h"
#include "CapacityHoldingItemAggregator.h"
#include "ItemPlacerAggregator.h"

APlaceableItem::APlaceableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Capacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("Aggregater"));
    this->ItemPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("ItemPlacer"));
    this->PlacableClass = NULL;
}

void APlaceableItem::Server_SpawnItem_Implementation(FVector Location) {
}


void APlaceableItem::OnCarriedAmountChanged(int32 newAmount) {
}


