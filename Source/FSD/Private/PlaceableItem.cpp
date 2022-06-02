#include "PlaceableItem.h"
#include "CapacityHoldingItemAggregator.h"
#include "ItemPlacerAggregator.h"

void APlaceableItem::Server_SpawnItem_Implementation(FVector Location) {
}
bool APlaceableItem::Server_SpawnItem_Validate(FVector Location) {
    return true;
}


void APlaceableItem::OnCarriedAmountChanged(int32 newAmount) {
}

APlaceableItem::APlaceableItem() {
    this->Capacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("Aggregater"));
    this->ItemPlacer = CreateDefaultSubobject<UItemPlacerAggregator>(TEXT("ItemPlacer"));
    this->PlacableClass = NULL;
}

