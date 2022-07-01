#include "InventoryList.h"
#include "Templates/SubclassOf.h"

class UItemID;
class UObject;
class AActor;

UItemID* UInventoryList::GetPreviousUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem) const {
    return NULL;
}

UItemID* UInventoryList::GetPreviousItem(EItemCategory Category, UItemID* currentItem) const {
    return NULL;
}

int32 UInventoryList::GetNumberOfItems(EItemCategory Category) const {
    return 0;
}

UItemID* UInventoryList::GetNextUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem) const {
    return NULL;
}

UItemID* UInventoryList::GetNextItem(EItemCategory Category, UItemID* currentItem) const {
    return NULL;
}

TArray<TSubclassOf<AActor>> UInventoryList::GetLoadedItemListFiltered(EItemCategory Category, FItemFilterDelegate Filter) const {
    return TArray<TSubclassOf<AActor>>();
}

TArray<TSubclassOf<AActor>> UInventoryList::GetLoadedItemList(EItemCategory Category) const {
    return TArray<TSubclassOf<AActor>>();
}

TArray<UItemID*> UInventoryList::GetItemList(EItemCategory Category) const {
    return TArray<UItemID*>();
}

int32 UInventoryList::GetItemIndex(EItemCategory Category, UItemID* Item) const {
    return 0;
}

TArray<UItemID*> UInventoryList::GetAllItemsList() const {
    return TArray<UItemID*>();
}

void UInventoryList::CheckForInventoryAchievements(UObject* WorldContextObject) {
}

UInventoryList::UInventoryList() {
    this->LaserPointerItem = NULL;
    this->TerrainScannerItem = NULL;
    this->ResupplyItem = NULL;
}

