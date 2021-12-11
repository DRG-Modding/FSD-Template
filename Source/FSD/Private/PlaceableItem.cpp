#include "PlaceableItem.h"

void APlaceableItem::Server_SpawnItem_Implementation(FVector Location) {
}
bool APlaceableItem::Server_SpawnItem_Validate(FVector Location) {
    return true;
}


void APlaceableItem::OnCarriedAmountChanged(int32 newAmount) {
}

APlaceableItem::APlaceableItem() {
    this->PlacableClass = NULL;
}

