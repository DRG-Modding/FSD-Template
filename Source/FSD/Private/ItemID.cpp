#include "ItemID.h"
#include "Templates/SubclassOf.h"

bool UItemID::IsItemClassChildOf(TSubclassOf<AActor> InParentClass) const {
    return false;
}

UItemData* UItemID::GetItemData() const {
    return NULL;
}

TSubclassOf<AItem> UItemID::GetItemClass() const {
    return NULL;
}

EItemCategory UItemID::GetItemCategory() const {
    return EItemCategory::PrimaryWeapon;
}

AItem* UItemID::GetItem() const {
    return NULL;
}

TArray<UItemSkin*> UItemID::GetAllSkins() {
    return TArray<UItemSkin*>();
}

TSubclassOf<AActor> UItemID::GetActorClass() const {
    return NULL;
}

AActor* UItemID::GetActor() const {
    return NULL;
}

UItemID::UItemID() {
    this->ItemOwner = NULL;
    this->ItemCategory = EItemCategory::PrimaryWeapon;
}

