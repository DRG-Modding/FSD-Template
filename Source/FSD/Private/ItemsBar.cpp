#include "ItemsBar.h"

UItemsBar::UItemsBar() {
    this->DefaultItemWidget = NULL;
    this->bShowSupplyItem = false;
    this->SupplyIcon = NULL;
    this->SelectedIcon = NULL;
}





void UItemsBar::OnItemsLoaded() {
}





void UItemsBar::ItemEquipped(AItem* NewItem) {
}

void UItemsBar::ItemClicked(AItem* NewItem) {
}


